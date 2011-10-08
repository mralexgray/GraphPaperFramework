//
//  GraphPaperView.h
//  GraphPaperViewStake
//
//  Created by Seth Landsman on 8/20/11.
//  Copyright (c) 2011 HomeForDerangedScientists. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "CellSource.h"
#import "ClickSource.h"

@interface GraphPaperView : NSView <ClickSource, CellSink>

@property(assign) id<CellSource> source;

@end


