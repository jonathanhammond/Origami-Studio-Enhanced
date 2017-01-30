//
//  OZAppDelegate.h
//  Swoosh
//
//  Created by Jonathan Hammond on 15/01/14.
//  Copyright (c) 2017 Jonathan Hammond. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Quartz/Quartz.h>

@class OZQuartzComposerLoader;

@interface OZAppDelegate : NSObject <NSApplicationDelegate>
{
    OZQuartzComposerLoader              *_qcLoader;
}

@property (assign) IBOutlet NSWindow    *window;


// ---- Setup the Quartz Rendering
//
- (void) setupQuartzRendering;



@end
