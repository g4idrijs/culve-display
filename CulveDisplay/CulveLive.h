//
//  CulveLive.h
//  CulveDisplay
//
//  Created by 王源果 on 14/12/15.
//  Copyright (c) 2014年 g4idrijs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PointContainer : NSObject

@property (nonatomic , readonly) NSInteger numberOfRefreshElements;
@property (nonatomic , readonly) NSInteger numberOfTranslationElements;
@property (nonatomic , readonly) CGPoint *refreshPointContainer;
@property (nonatomic , readonly) CGPoint *translationPointContainer;

+ (PointContainer *)sharedContainer;

//刷新变换
- (void)addPointAsRefreshChangeform:(CGPoint)point;
//平移变换
- (void)addPointAsTranslationChangeform:(CGPoint)point;

@end

@interface CulveLive : UIView

- (void)fireDrawingWithPoints:(CGPoint *)points pointsCount:(NSInteger)count;

@end
