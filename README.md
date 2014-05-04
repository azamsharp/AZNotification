<h1>AZNotification</h1>

<p>
AZNotification is a custom control which allows the user to provide user interface notifications to the user. AZNotification is implemented for iOS 7 framework and utilizes the UIKit Dynamics to create the physics effects. 
</p>

<h2>Screenshot</h2>

<img src="http://www.highoncoding.com/articleimages/AZNotification_002.png"/>

<h2>Video</h2>

<p>
You can watch the video using the link below:

<a href="https://www.youtube.com/watch?v=OSMQ_N3ydSs">AZNotification Video on YouTube</a>
</p>

<h2>Installation</h2>

- Copy the contents of the "src" folder in your application. 
- `#import "AZNotification.h"`

The AZNotification control <b>will</b> be available as a Cocoapod soon. 

<h2>Usage</h2>

```
    [AZNotification showNotificationWithTitle:@"Success! Now let's play!" controller:self notificationType:AZNotificationTypeSuccess];
 
    [AZNotification showNotificationWithTitle:@"Error: WTF happened!" controller:self notificationType:AZNotificationTypeError];
  
    [AZNotification showNotificationWithTitle:@"Oh BTW! Your hair is on fire!" controller:self notificationType:AZNotificationTypeWarning];
    
    [AZNotification showNotificationWithTitle:@"There are no new messages!" controller:self notificationType:AZNotificationTypeMessage];

```
