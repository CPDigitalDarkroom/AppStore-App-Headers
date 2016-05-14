/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, FBStarRatingsState, FBStarRatingsSmartTriggerData, FBStarRatingsShowDialogResponse, FBStarRatingsDialogMetadata;

@interface FBStarRatingsUserData : NSObject <NSCoding, NSCopying> {

	char _hasCompletedFlow;
	NSDate* _firstLoginTime;
	NSString* _bundleVersion;
	NSDate* _nextPingTime;
	FBStarRatingsState* _state;
	FBStarRatingsSmartTriggerData* _smartTriggerData;
	FBStarRatingsShowDialogResponse* _showDialogResponse;
	unsigned _initiationMode;
	NSString* _targetPurpose;
	FBStarRatingsDialogMetadata* _dialogMetadata;

}

@property (nonatomic,readonly) NSDate * firstLoginTime;                                       //@synthesize firstLoginTime=_firstLoginTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleVersion;                                      //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSDate * nextPingTime;                                           //@synthesize nextPingTime=_nextPingTime - In the implementation block
@property (nonatomic,copy) FBStarRatingsState * state;                                        //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) FBStarRatingsSmartTriggerData * smartTriggerData;                  //@synthesize smartTriggerData=_smartTriggerData - In the implementation block
@property (nonatomic,copy) FBStarRatingsShowDialogResponse * showDialogResponse;              //@synthesize showDialogResponse=_showDialogResponse - In the implementation block
@property (assign,nonatomic) char hasCompletedFlow;                                           //@synthesize hasCompletedFlow=_hasCompletedFlow - In the implementation block
@property (assign,nonatomic) unsigned initiationMode;                                         //@synthesize initiationMode=_initiationMode - In the implementation block
@property (nonatomic,copy) NSString * targetPurpose;                                          //@synthesize targetPurpose=_targetPurpose - In the implementation block
@property (nonatomic,copy) FBStarRatingsDialogMetadata * dialogMetadata;                      //@synthesize dialogMetadata=_dialogMetadata - In the implementation block
-(unsigned)initiationMode;
-(NSString *)targetPurpose;
-(FBStarRatingsDialogMetadata *)dialogMetadata;
-(char)isFirstLoginTimeForCurrentVersion;
-(char)hasCompletedFlow;
-(NSDate *)nextPingTime;
-(FBStarRatingsShowDialogResponse *)showDialogResponse;
-(FBStarRatingsSmartTriggerData *)smartTriggerData;
-(void)setShowDialogResponse:(FBStarRatingsShowDialogResponse *)arg1 ;
-(void)setInitiationMode:(unsigned)arg1 ;
-(void)setTargetPurpose:(NSString *)arg1 ;
-(void)setDialogMetadata:(FBStarRatingsDialogMetadata *)arg1 ;
-(void)setNextPingTime:(NSDate *)arg1 ;
-(void)setHasCompletedFlow:(char)arg1 ;
-(NSDate *)firstLoginTime;
-(void)setSmartTriggerData:(FBStarRatingsSmartTriggerData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(FBStarRatingsState *)state;
-(void)setState:(FBStarRatingsState *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleVersion;
@end

