
#import <UIKit/UIKit.h>
#import <stdio.h>
#import "Classes/agsAppDelegate.h"

int main(int argc, char *argv[])
{
    // Disable buffering for stdout
    setvbuf(stdout, NULL, _IONBF, 0);
    
    // Storyboard
    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([agsAppDelegate class]));
    }
}
