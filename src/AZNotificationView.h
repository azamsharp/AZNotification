//
//  AZNotificationView.h
//  Helping
//
//  Created by Mohammad Azam on 3/27/14.
//  Copyright (c) 2014 AzamSharp Consulting LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIColor+Additions.h"



extern NSString *const SUCCESS_COLOR;
extern NSString *const ERROR_COLOR;
extern NSString *const WARNING_COLOR;
extern NSString *const MESSAGE_COLOR;

typedef NS_ENUM(NSInteger, AZNotificationType) {
    
    AZNotificationTypeSuccess = 0,
    AZNotificationTypeError,
    AZNotificationTypeWarning,
    AZNotificationTypeMessage
};


@interface AZNotificationView : UIView
{
    NSString *_title;
    UIView *_referenceView;
    AZNotificationType _notificationType;
    BOOL _showNotificationUnderNavigationBar; 
    
    UIDynamicAnimator *_animator;
    UIGravityBehavior *_gravity;
    UICollisionBehavior *_collision;
    UIDynamicItemBehavior *_itemBehavior;
    UISnapBehavior *snap;
    
    int _collisionCount;
}

-(void) setup;
-(void) applyDynamics;

-(instancetype) initWithTitle:(NSString *) title referenceView:(UIView *) referenceView notificationType:(AZNotificationType) notificationType;

-(instancetype) initWithTitle:(NSString *) title referenceView:(UIView *) referenceView notificationType:(AZNotificationType) notificationType showNotificationUnderNavigationBar:(BOOL) showNotificationUnderNavigationBar;


@end
