
# Introduction

Pendo: A Platform for Product Engagement. Include Pendo in your project to start collecting analytics from iOS devices. For more information, visit www.pendo.io.

# Requirements

- iOS 7.0+
- Xcode 7+

# Installation

## Manual

### Static Library

Pendo is currently distributed as a static library. Follow these instructions to install Pendo:

  - Download Pendo.zip
  - Unzip and copy libPendo.a and Pendo.h to your project.
  - Go to `Other Linker Flags` on `Build Settings` and include `-all_load`.
  - (Optional) Import the Pendo header on your bridging header if you use Swift. 
 
A note on installation: Once Pendo is publicly available, the SDK will be available on dependency management systems (e.g.: CocoaPods, Carthage).

# Using Pendo

## Initialize

Pendo-iOS has been designed from the ground up to be non-intrusive and self-contained (no dependencies). Pendo-iOS only needs to be initialized in your app's delegate to start working:

### Swift

```swift
import Pendo
	
func application(application: UIApplication, didFinishLaunchingWithOptions launchOptions: [NSObject: AnyObject]?) -> Bool {
    /// Initialize Pendo
    Pendo.startWithApiKey("PENDO_API_KEY")
    return true
}
```
    
### Objective-C

```objc
#import <Pendo/Pendo.h>

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

# Best Practices

Here are some best practices to make the most out of Pendo:

1. View Controllers Events
  - Remember to call super when a UIViewController's viewDidLoad or viewWillUnload is overwritten. Not calling `super` may cause the SDK to not send load or unload events.
1. Make your application accessible
  - Pendo uses the accessibility fields to assist tagging.

# Support

We would love to hear from you: feedback, question, bugs, you name it. Drop us a line at `awesome.support@pendo.io` and a human will follow up. 

