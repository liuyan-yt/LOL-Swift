//
//  DBSphereView.h
//  sphereTagCloud
//
//  Created by Xinbao Dong on 14/8/31.
//  Copyright (c) 2014年 Xinbao Dong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DBSphereView : UIView

/**
 *  Sets the cloud's tag views.
 *  集云的表前视图
 *
 *	@remarks Any @c UIView subview can be passed in the array.
 *
 *  @param array The array of tag views.
 */
- (void)setCloudTags:(NSArray *)array;

/**
 *  Starts the cloud autorotation animation.
 *  启动云自动旋转动画
 */
- (void)timerStart;

/**
 *  Stops the cloud autorotation animation.
 *  停云自动旋转动画
 */
- (void)timerStop;

@end
