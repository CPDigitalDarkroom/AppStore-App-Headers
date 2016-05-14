/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBLocationManagerSubscription.h>

@protocol FBCallPath;
@class FBLocationManager, FBTimer;

@interface FBLocationManagerSubscriptionEntry : NSObject <FBLocationManagerSubscription> {

	/*^block*/id _block;
	FBLocationManager* _manager;
	FBTimer* _accurateFixTimeoutTimer;
	id<FBCallPath> _callPath;
	double _desiredAccuracy;

}

@property (assign,nonatomic) double desiredAccuracy;                          //@synthesize desiredAccuracy=_desiredAccuracy - In the implementation block
@property (nonatomic,copy) id block;                                          //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) FBLocationManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) FBTimer * accurateFixTimeoutTimer;               //@synthesize accurateFixTimeoutTimer=_accurateFixTimeoutTimer - In the implementation block
@property (nonatomic,retain) id<FBCallPath> callPath;                         //@synthesize callPath=_callPath - In the implementation block
-(void)setCallPath:(id<FBCallPath>)arg1 ;
-(id<FBCallPath>)callPath;
-(FBTimer *)accurateFixTimeoutTimer;
-(void)setAccurateFixTimeoutTimer:(FBTimer *)arg1 ;
-(void)setManager:(FBLocationManager *)arg1 ;
-(FBLocationManager *)manager;
-(double)desiredAccuracy;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)unsubscribe;
@end

