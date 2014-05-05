//
//  AZNotification.h
//  Helping
//
//  Created by Mohammad Azam on 3/27/14.
//  Copyright (c) 2014 AzamSharp Consulting LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZNotificationView.h"

@interface AZNotification : NSObject
{
    
}

+(void) showNotificationWithTitle:(NSString *)title controller:(UIViewController *)controller notificationType:(AZNotificationType) notificationType;


+(void) showNotificationWithTitle:(NSString *)title controller:(UIViewController *)controller notificationType:(AZNotificationType) notificationType shouldShowNotificationUnderNavigationBar:(BOOL) shouldShowNotificationUnderNavigationBar;

@end
