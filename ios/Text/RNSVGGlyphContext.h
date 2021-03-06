/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <React/UIView+React.h>
#import <CoreText/CoreText.h>
#import "RNSVGPercentageConverter.h"

@interface RNSVGGlyphContext : NSObject

- (instancetype)initWithDimensions:(CGFloat)width height:(CGFloat)height;

- (CGFloat)getWidth;
- (CGFloat)getHeight;
- (CGFloat)getFontSize;
- (void)pushContext:(NSDictionary *)font;
- (void)pushContext:(NSDictionary *)font deltaX:(NSArray<NSString *> *)deltaX deltaY:(NSArray<NSString *> *)deltaY positionX:(NSArray<NSString *> *)positionX positionY:(NSArray<NSString *> *)positionY;
- (void)popContext;
- (CTFontRef)getGlyphFont;
- (CGPoint)getNextGlyphPoint:(CGPoint)offset glyphWidth:(CGFloat)glyphWidth;

@end
