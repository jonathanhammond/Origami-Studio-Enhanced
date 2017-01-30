//
//  OZQCRendererHelper.m
//  Swoosh
//
//  Created by Benoît LAHOZ on 15/01/14.
//  Copyright (c) 2014 L'ange Carasuelo. All rights reserved.
//

#import "OZQuartzComposerLoader.h"
#import "QCPatch.h"

@implementation OZQuartzComposerLoader

- (id) init
{
    if (self = [super init]) {

        return self;
    }
    
    return nil;
}

- (void) loadPlugins:(NSArray *)pluginsNames atPath:(NSString *)path
{
    for (NSString *filename in pluginsNames) {
        
        NSString *pluginPath = [NSString stringWithFormat:@"%@/%@.plugin", path, filename];

        if (![QCPlugIn loadPlugInAtPath:pluginPath]) {
            NSLog(@"%@ - %@.plugin plugin failed to load.", [self class], filename);
        }
        
    }
}

- (void) loadPatches:(NSArray *)patchesNames atPath:(NSString *)path
{
    for (NSString *filename in patchesNames) {
        
        NSString *patchPath = [NSString stringWithFormat:@"%@/%@.plugin", path, filename];

        [QCPatch loadPlugInAtPath:patchPath];
        
    }
}





- (void) initViewWithComposition:(NSString *)filename atPath:(NSString *)path inContentView:(NSView *)contentView
{
    
    // ---- Init and setup the view in the provided window
    //
    _view = [[QCView alloc] initWithFrame:[contentView frame]];
    [contentView addSubview:_view];
    
    
    // ---- Auto-layout
    //
    [_view setTranslatesAutoresizingMaskIntoConstraints:NO];
    NSDictionary *views = NSDictionaryOfVariableBindings(_view);
    [contentView addConstraints:
    [NSLayoutConstraint constraintsWithVisualFormat:@"H:|[_view]|"
                                            options:0
                                            metrics:nil
                                              views:views]];
    
    [contentView addConstraints:
    [NSLayoutConstraint constraintsWithVisualFormat:@"V:|[_view]|"
                                            options:0
                                            metrics:nil
                                              views:views]];
    
    
    // ---- Loads the composition or terminate
    //
    NSString *compositionPath = [NSString stringWithFormat:@"%@/%@.qtz", path, filename];
    
    NSAssert([_view loadCompositionFromFile:compositionPath], ([NSString stringWithFormat:@"%@.qtz composition failed to load.", filename]));

}



- (void) setEventForwardingMask:(NSUInteger)mask
{
    if (_view) {
        [_view setEventForwardingMask:mask];
    }
}

- (BOOL) startRendering
{
    if (_view) {
        NSAssert([_view startRendering], @"The Quartz Composer view couldn't render.");
    }
    
    return NO;
}

- (NSString *) keyPathForOutputKey:(NSString *)outputKey
{
    return [NSString stringWithFormat:@"patch.%@.value", outputKey];
}

- (id) valueForOutputKey:(NSString *)outputKey
{
    return [_view valueForOutputKey:outputKey];
}




- (void) setValue:(NSString *)value forInputKey:(NSString *)inputKey
{
    [_view setValue:value forInputKey:inputKey];
}


@end
