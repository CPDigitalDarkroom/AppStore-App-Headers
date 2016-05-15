/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/T1TalonUnwrappingFeatureSwitches.h>

@class NSNumber, TFNTwitterAccount, NSString;

@interface T1TalonUnwrappingFeatureSwitchObserver : NSObject <T1TalonUnwrappingFeatureSwitches> {

	NSNumber* _URLUnwrappingEnabled;
	NSNumber* _completeChainURLUnwrappingEnabled;
	char _URLUnwrapTimeoutWasSet;
	TFNTwitterAccount* _account;
	double _URLUnwrapTimeout;

}

@property (nonatomic,__weak,readonly) TFNTwitterAccount * account;                                                             //@synthesize account=_account - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isURLUnwrappingEnabled,nonatomic,readonly) char URLUnwrappingEnabled; 
@property (nonatomic,readonly) double URLUnwrapTimeout;                                                                        //@synthesize URLUnwrapTimeout=_URLUnwrapTimeout - In the implementation block
@property (getter=isCompleteChainURLUnwrappingEnabled,nonatomic,readonly) char completeChainURLUnwrappingEnabled; 
-(void)_featureSwitchesUpdatedWithNotification:(id)arg1 ;
-(char)isURLUnwrappingEnabled;
-(double)URLUnwrapTimeout;
-(char)isCompleteChainURLUnwrappingEnabled;
-(id)initWithAcount:(id)arg1 ;
-(void)dealloc;
-(TFNTwitterAccount *)account;
@end

