/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:50 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBGraphQLInput.h>

@class NSString, NSNumber, FBSuggestionContextInputSuggestionContextLatLon;

@interface FBSuggestionContextInputSuggestionContext : FBGraphQLInput {

	NSString* _suggestionToken;
	NSString* _suggestionType;
	NSNumber* _eventCategory;
	NSString* _time;
	NSString* _city;
	FBSuggestionContextInputSuggestionContextLatLon* _latLon;
	NSString* _range;
	NSString* _sort;
	NSString* _tags;
	NSString* _keywords;

}

@property (nonatomic,copy) NSString * suggestionToken;                                            //@synthesize suggestionToken=_suggestionToken - In the implementation block
@property (nonatomic,copy) NSString * suggestionType;                                             //@synthesize suggestionType=_suggestionType - In the implementation block
@property (nonatomic,copy) NSNumber * eventCategory;                                              //@synthesize eventCategory=_eventCategory - In the implementation block
@property (nonatomic,copy) NSString * time;                                                       //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSString * city;                                                       //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) FBSuggestionContextInputSuggestionContextLatLon * latLon;              //@synthesize latLon=_latLon - In the implementation block
@property (nonatomic,copy) NSString * range;                                                      //@synthesize range=_range - In the implementation block
@property (nonatomic,copy) NSString * sort;                                                       //@synthesize sort=_sort - In the implementation block
@property (nonatomic,copy) NSString * tags;                                                       //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy) NSString * keywords;                                                   //@synthesize keywords=_keywords - In the implementation block
-(NSString *)suggestionType;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setSuggestionToken:(NSString *)arg1 ;
-(void)setSuggestionType:(NSString *)arg1 ;
-(NSNumber *)eventCategory;
-(void)setEventCategory:(NSNumber *)arg1 ;
-(FBSuggestionContextInputSuggestionContextLatLon *)latLon;
-(void)setLatLon:(FBSuggestionContextInputSuggestionContextLatLon *)arg1 ;
-(NSString *)suggestionToken;
-(NSString *)city;
-(NSString *)tags;
-(void)setTime:(NSString *)arg1 ;
-(NSString *)time;
-(NSString *)range;
-(void)setRange:(NSString *)arg1 ;
-(void)setTags:(NSString *)arg1 ;
-(NSString *)sort;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)keywords;
-(void)setSort:(NSString *)arg1 ;
-(void)setCity:(NSString *)arg1 ;
@end

