/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNPeopleDiscoveryModuleLayout.h>
#import <Twitter/TFNPeopleDiscoveryTweetForwardCarouselModuleLayout.h>
@class NSArray;


@protocol TFNPeopleDiscoveryTweetForwardCarouselModuleLayout <TFNPeopleDiscoveryModuleLayout>
@property (nonatomic,copy,readonly) NSArray * userRecommendations; 
@required
-(NSArray *)userRecommendations;
-(id)statusesForUserRecommendation:(id)arg1;

@end


@class NSArray, NSString;

@interface TFNPeopleDiscoveryTweetForwardCarouselModuleLayout : TFNPeopleDiscoveryModuleLayout <TFNPeopleDiscoveryTweetForwardCarouselModuleLayout> {

	NSArray* _userRecommendations;
	NSArray* _statuses;

}

@property (nonatomic,copy,readonly) NSArray * statuses;                                      //@synthesize statuses=_statuses - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TFNPeopleDiscoveryModuleLayoutHeader> header; 
@property (nonatomic,__weak,readonly) id<TFNPeopleDiscoveryModule> module; 
@property (nonatomic,copy,readonly) NSArray * userRecommendations;                           //@synthesize userRecommendations=_userRecommendations - In the implementation block
-(NSArray *)userRecommendations;
-(NSArray *)statuses;
-(id)statusesForUserRecommendation:(id)arg1 ;
-(id)initWithModuleLayoutHeader:(id)arg1 ;
-(id)initWithModuleLayoutHeader:(id)arg1 userRecommendations:(id)arg2 statuses:(id)arg3 ;
-(id)init;
@end

