//
//  ViewController.h
//  Helping
//
//  Created by Mohammad Azam on 3/24/14.
//  Copyright (c) 2014 AzamSharp Consulting LLC. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AZNotification.h"
#import "AZNotificationView.h"

@interface ViewController : UIViewController
{
    UIDynamicAnimator *_animator;
    UIGravityBehavior *_gravity; 
}

-(IBAction) show:(id) sender; 

@end
