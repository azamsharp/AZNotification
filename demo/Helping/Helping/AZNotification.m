//
//  AZNotification.m
//  Helping
//
//  Created by Mohammad Azam on 3/27/14.
//  Copyright (c) 2014 AzamSharp Consulting LLC. All rights reserved.
//

#import "AZNotification.h"

@implementation AZNotification

+(void) showNotificationWithTitle:(NSString *)title controller:(UIViewController *)controller notificationType:(AZNotificationType)notificationType shouldShowNotificationUnderNavigationBar:(BOOL)shouldShowNotificationUnderNavigationBar
{
    AZNotificationView *notificationView = [[AZNotificationView alloc] initWithTitle:title referenceView:controller.view notificationType:(AZNotificationType) notificationType showNotificationUnderNavigationBar:YES];
    
    [controller.view addSubview:notificationView];
    
    [notificationView applyDynamics];

}

+(void) showNotificationWithTitle:(NSString *)title controller:(UIViewController *)controller notificationType:(AZNotificationType)notificationType
{
    controller = controller.navigationController ? controller.navigationController : controller;
    
    AZNotificationView *notificationView = [[AZNotificationView alloc] initWithTitle:title referenceView:controller.view notificationType:(AZNotificationType) notificationType];
    
    [controller.view addSubview:notificationView];
    
    [notificationView applyDynamics];
}

@end
