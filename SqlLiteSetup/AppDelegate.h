//
//  AppDelegate.h
//  SqlLiteSetup
//
//  Created by Colman Marcus-Quinn on 18.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <sqlite3.h>

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate> {
    // SQLITE database
    sqlite3 *database;
}

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end
