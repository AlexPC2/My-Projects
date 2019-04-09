//
//  Alex_s_Screen_saverView.m
//  Alex's_Screen_saver
//
//  Created by Alex Noyanov on 09.04.19.
//  Copyright © 2019 Popoff Developer Studio. All rights reserved.
//

#import "Alex_s_Screen_saverView.h"

@implementation Alex_s_Screen_saverView

- (instancetype)initWithFrame:(NSRect)frame isPreview:(BOOL)isPreview
{
    self = [super initWithFrame:frame isPreview:isPreview];
    if (self) {
        [self setAnimationTimeInterval:1/30.0];
    }
    return self;
}

- (void)startAnimation
{
    [super startAnimation];
}

- (void)stopAnimation
{
    [super stopAnimation];
}

- (void)drawRect:(NSRect)rect
{
    [super drawRect:rect];
}

- (void)animateOneFrame
{
    return;
}

- (BOOL)hasConfigureSheet
{
    return NO;
}

- (NSWindow*)configureSheet
{
    return nil;
}

@end
