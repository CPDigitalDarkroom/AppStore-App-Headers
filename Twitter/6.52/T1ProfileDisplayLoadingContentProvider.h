/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1ProfileDisplayContentProvider.h>

@class T1ProfileLoadingStateViewController;

@interface T1ProfileDisplayLoadingContentProvider : T1ProfileDisplayContentProvider {

	T1ProfileLoadingStateViewController* _loadingStateViewController;

}

@property (assign,nonatomic,__weak) T1ProfileLoadingStateViewController * loadingStateViewController;              //@synthesize loadingStateViewController=_loadingStateViewController - In the implementation block
@property (nonatomic,readonly) int loadingState; 
-(T1ProfileLoadingStateViewController *)loadingStateViewController;
-(void)setLoadingStateViewController:(T1ProfileLoadingStateViewController *)arg1 ;
-(char)canBecomeCurrent;
-(id)generateDefaultMainViewController;
-(int)loadingState;
@end

