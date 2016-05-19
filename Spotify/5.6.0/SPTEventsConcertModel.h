/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDate, NSURL;

@interface SPTEventsConcertModel : NSObject {

	char _isRecommendedToUser;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _artists;
	NSDate* _date;
	NSString* _venue;
	NSString* _songkickID;
	NSURL* _songkickURL;

}

@property (nonatomic,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSArray * artists;                     //@synthesize artists=_artists - In the implementation block
@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * venue;                      //@synthesize venue=_venue - In the implementation block
@property (nonatomic,readonly) NSString * songkickID;                 //@synthesize songkickID=_songkickID - In the implementation block
@property (nonatomic,readonly) NSURL * songkickURL;                   //@synthesize songkickURL=_songkickURL - In the implementation block
@property (nonatomic,readonly) char isRecommendedToUser;              //@synthesize isRecommendedToUser=_isRecommendedToUser - In the implementation block
+(id)dateFromDictionary:(id)arg1 withKey:(id)arg2 ;
+(id)subtitleDateFormatter;
+(id)artistsFromDictionary:(id)arg1 ;
+(id)backendDateFormatter;
+(id)subtitleDateFormatterWithLocale:(id)arg1 ;
+(id)subtitleFromDate:(id)arg1 venue:(id)arg2 ;
-(NSString *)venue;
-(NSString *)songkickID;
-(NSURL *)songkickURL;
-(char)isRecommendedToUser;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSDate *)date;
-(NSString *)subtitle;
-(NSArray *)artists;
@end

