
# Introduction

Pendo: A Platform for Product Engagement. Include Pendo in your project to start collecting analytics from iOS devices. For more information, visit www.pendo.io.

# Requirements

- iOS 8.0+
- Xcode 7+

# Installation

## Manual

### Static Library

Pendo is currently distributed as a static library. Follow these instructions to install Pendo:

  - Download [pendo-ios-0.0.12.zip](https://github.com/pendo-io/pendo-ios/releases/tag/0.0.12)
  - Unzip and copy libPendo.a and the headers to your project.
  - Go to `Other Linker Flags` on `Build Settings` and include `-all_load`.
  - (Optional) Import the Pendo header on your bridging header if your project uses Swift.

```
// BridgingHeaders.h
#import "Your/Path/Pendo.h"
```

## Dependency Managers

### Cocoapods

Add the following to your Podfile:

`pod 'Pendo', '~> 0.0.12'`

If you are using Swift, you may need to add `Pendo.h` to your bridging header.

### Carthage

Carthage is not yet supported. Stay tuned for updates!

# Using Pendo

## Initialize

Pendo-iOS has been designed from the ground up to be non-intrusive and self-contained (no dependencies). Pendo-iOS only needs to be initialized in your app's delegate to start working:

### Swift

```swift	
func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
    /// Initialize Pendo
    Pendo.startWithApiKey("AWESOME_SAUCE")
    return true
}
```
    
### Objective-C

```objc
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    /// Initialize Pendo
    [Pendo startWithApiKey:@"AWESOME_SAUCE"];
    return true;
}
```

## Identifying a Visitor

The host app should tell Pendo when it knows about a user. Use this call to configure an active user:

### Swift
```swift
Pendo.sharedInstance().identify { visitor, account in
    visitor.visitorId = "first visitor"
    visitor.email = "johnsmith@pendo.com"
    visitor.options = [
        "first_name" : "John",
        "last_name" : "Smith",
        "role" : "editor"
    ]
    account.accountId = "Restaurant_33114422"
    account.options = [
        "street" : "1st Awesome St",
        "city" : "Raleigh",
        "state" : "NC"
    ]
}
``` 

### Objective-C
```objc
[[Pendo sharedInstance] identify:^(PDOVisitor *visitor, PDOAccount *account) {
    visitor.visitorId = @"first visitor";
    visitor.email = @"johnsmith@pendo.com";
    visitor.options = @{
        @"first_name" : @"John",
        @"last_name" : @"Smith",
        @"role" : @"editor"
    };
    account.accountId = @"Restaurant_33114422";
    account.options = @{
        @"street" : @"1st Awesome St",
        @"city" : @"Raleigh",
        @"state" : @"NC"
    };
}];
```

## Enable logging

Pendo can log to the Xcode's console all the events that are being captured and subsequently synced online.

### Swift
```swift
Pendo.sharedInstance().enableLog()
``` 

### Objective-C
```objc
[[Pendo sharedInstance] enableLog];
```

## Pause and resume capturing events

Pendo can pause and resume capturing events.

### Swift
```swift
Pendo.sharedInstance().eventCapturingEnabled = true
``` 

### Objective-C
```objc
[[Pendo sharedInstance] setEventCapturingEnabled:YES];
```

# Best Practices

Here are some best practices to make the most out of Pendo:

1. View Controllers Events
  - Remember to call super when a UIViewController's viewDidLoad or viewWillUnload is overwritten. Not calling `super` may cause the SDK to not send load or unload events.
1. Make your application accessible
  - Pendo uses the accessibility fields to assist tagging.

# What does Pendo capture?

Pendo currently captures the following items:

1. Application events
  - Did finish launching
  - Did become active
  - Will resign active
2. View controller lifecycle
  - View did appear
  - View will disappear
3. UIResponder actions 
  - buttons
  - segmented controls
  - slider
  - stepper
  - table view cells
  - text fields

# Support

We would love to hear from you: feedback, question, bugs, you name it. [Drop us a line](https://pendo.desk.com/customer/portal/emails/new) and a human will follow up. 

