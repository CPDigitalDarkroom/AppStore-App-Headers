/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SPTTelcoActivationDelayManager : NSObject {

	NSDate* _lastTryDate;
	NSDate* _nextTryDate;

}

@property (nonatomic,copy) NSDate * lastTryDate;              //@synthesize lastTryDate=_lastTryDate - In the implementation block
@property (nonatomic,copy) NSDate * nextTryDate;              //@synthesize nextTryDate=_nextTryDate - In the implementation block
-(NSDate *)nextTryDate;
-(void)setLastTryDate:(NSDate *)arg1 ;
-(void)postponeRetriesForOneHour;
-(NSDate *)lastTryDate;
-(void)setNextTryDate:(NSDate *)arg1 ;
-(void)postponeRetriesFor:(double)arg1 ;
-(char)allowedToTry;
-(void)didStartTrying;
-(void)postponeRetriesFor24Hours;
@end

