/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBNuxStepChainControllerDelegate.h>

@class FBUserSession, FBNuxController, FBTimer, NSString;

@interface FBSavedUrlNuxManager : NSObject <FBNuxStepChainControllerDelegate> {

	FBUserSession* _session;
	FBNuxController* _topLevelSaveButtonNuxController;
	FBNuxController* _saveConfirmationNuxController;
	FBTimer* _currentTimer;

}

@property (nonatomic,retain) FBNuxController * topLevelSaveButtonNuxController;              //@synthesize topLevelSaveButtonNuxController=_topLevelSaveButtonNuxController - In the implementation block
@property (nonatomic,retain) FBNuxController * saveConfirmationNuxController;                //@synthesize saveConfirmationNuxController=_saveConfirmationNuxController - In the implementation block
@property (nonatomic,retain) FBTimer * currentTimer;                                         //@synthesize currentTimer=_currentTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showSaveNuxIfNeededForButton:(id)arg1 inView:(id)arg2 ;
-(void)dismissNux;
-(void)showSaveConfirmationNuxForMoreButton:(id)arg1 inView:(id)arg2 orientation:(unsigned)arg3 ;
-(void)createTimerForNuxController;
-(void)_presentNUX:(id)arg1 withHighlightedFrame:(CGRect)arg2 forWindow:(id)arg3 ;
-(void)dismissForNuxController:(id)arg1 ;
-(void)setTopLevelSaveButtonNuxController:(FBNuxController *)arg1 ;
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(void)stepChainControllerDidCancel:(id)arg1 onStep:(id)arg2 ;
-(FBNuxController *)topLevelSaveButtonNuxController;
-(FBNuxController *)saveConfirmationNuxController;
-(void)setSaveConfirmationNuxController:(FBNuxController *)arg1 ;
-(FBTimer *)currentTimer;
-(void)setCurrentTimer:(FBTimer *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

