/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:06 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CLLocation, NSArray, FBNearbyPlace, FBMemPerson, FBMemPage;

@interface FBNearbyDataSet : NSObject <NSCoding, NSCopying> {

	char _shareCity;
	char _loadedFromCache;
	char _offlinePlaces;
	char _recentPlaces;
	NSString* _query;
	CLLocation* _location;
	NSArray* _places;
	FBNearbyPlace* _nearbyCity;
	NSString* _searchID;
	unsigned _checkinPromptType;
	FBMemPerson* _actor;
	FBMemPage* _closestCity;

}

@property (nonatomic,copy) NSString * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CLLocation * location;                   //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSArray * places;                          //@synthesize places=_places - In the implementation block
@property (nonatomic,retain) FBNearbyPlace * nearbyCity;              //@synthesize nearbyCity=_nearbyCity - In the implementation block
@property (assign,nonatomic) char shareCity;                          //@synthesize shareCity=_shareCity - In the implementation block
@property (nonatomic,copy) NSString * searchID;                       //@synthesize searchID=_searchID - In the implementation block
@property (assign,nonatomic) char loadedFromCache;                    //@synthesize loadedFromCache=_loadedFromCache - In the implementation block
@property (assign,nonatomic) char offlinePlaces;                      //@synthesize offlinePlaces=_offlinePlaces - In the implementation block
@property (assign,nonatomic) char recentPlaces;                       //@synthesize recentPlaces=_recentPlaces - In the implementation block
@property (assign,nonatomic) unsigned checkinPromptType;              //@synthesize checkinPromptType=_checkinPromptType - In the implementation block
@property (nonatomic,retain) FBMemPerson * actor;                     //@synthesize actor=_actor - In the implementation block
@property (nonatomic,retain) FBMemPage * closestCity;                 //@synthesize closestCity=_closestCity - In the implementation block
-(id)allPlacesID;
-(void)setNearbyCity:(FBNearbyPlace *)arg1 ;
-(void)setShareCity:(char)arg1 ;
-(void)setLoadedFromCache:(char)arg1 ;
-(void)setCheckinPromptType:(unsigned)arg1 ;
-(void)setClosestCity:(FBMemPage *)arg1 ;
-(FBNearbyPlace *)nearbyCity;
-(char)shareCity;
-(char)loadedFromCache;
-(unsigned)checkinPromptType;
-(FBMemPage *)closestCity;
-(void)setOfflinePlaces:(char)arg1 ;
-(void)setRecentPlaces:(char)arg1 ;
-(char)containsPlacesOfIds:(id)arg1 inFirstNResults:(unsigned)arg2 ;
-(char)offlinePlaces;
-(char)recentPlaces;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(FBMemPerson *)actor;
-(void)setActor:(FBMemPerson *)arg1 ;
-(NSArray *)places;
-(void)setPlaces:(NSArray *)arg1 ;
-(NSString *)searchID;
-(void)setSearchID:(NSString *)arg1 ;
@end

