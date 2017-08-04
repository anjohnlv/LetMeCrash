//
//  UncaughtExceptionHandler.h
//  LetMeCrash
//
//  Created by anjohnlv on 2017/8/3.
//  Copyright © 2017年 eastedu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UncaughtExceptionHandler : NSObject{
	BOOL dismissed;
}

@end
void HandleException(NSException *exception);
void SignalHandler(int signal);


//void InstallUncaughtExceptionHandler(void);
