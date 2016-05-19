/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SPTAccountTrialPaymentState : NSObject {

	NSString* _type;
	NSString* _durationTimestamp;
	NSString* _expirationTimestamp;
	NSDate* _expirationDate;
	double _duration;

}

@property (nonatomic,copy,readonly) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * durationTimestamp;                //@synthesize durationTimestamp=_durationTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * expirationTimestamp;              //@synthesize expirationTimestamp=_expirationTimestamp - In the implementation block
@property (nonatomic,readonly) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;                     //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)initWithPaymentState:(id)arg1 ;
-(NSString *)durationTimestamp;
-(NSString *)expirationTimestamp;
-(double)duration;
-(NSString *)type;
-(NSDate *)expirationDate;
@end

