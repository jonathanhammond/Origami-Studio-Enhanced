//
//  OZQCRendererHelper.h
//  Swoosh
//
//  Created by Jonathan Hammond on 15/01/17.
//  Copyright (c) 2017 Jonathan Hammond. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Quartz/Quartz.h>

@interface OZQuartzComposerLoader : NSObject


@property (nonatomic) QCView                              *view;


- (void) loadPlugins:(NSArray *)pluginsNames atPath:(NSString *)path;
- (void) loadPatches:(NSArray *)patchesNames atPath:(NSString *)path;
- (void) initViewWithComposition:(NSString *)filename atPath:(NSString *)path inContentView:(NSView *)contentView;

- (void) setEventForwardingMask:(NSUInteger)mask;
- (BOOL) startRendering;

- (NSString *) keyPathForOutputKey:(NSString *)outputKey;
- (id) valueForOutputKey:(NSString *)outputKey;

- (void) setValue:(NSString *)value forInputKey:(NSString *)inputKey;

@end
