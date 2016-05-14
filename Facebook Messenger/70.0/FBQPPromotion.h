/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBQPPromotionEntity, FBUserSession, NSDictionary, NSString, NSArray, FBQuickPromotionClause, FBQuickPromotionCoordinator, FBQuickPromotionFiltersHelper, NSDate, FBQPCreative;

@interface FBQPPromotion : NSObject {

	FBQPPromotionEntity* _promotionEntity;
	FBUserSession* _session;
	NSDictionary* _triggerContext;
	NSString* _nuxID;
	NSString* _activeTrigger;
	NSArray* _filters;
	FBQuickPromotionClause* _rootClause;

}

@property (nonatomic,copy) NSString * nuxID;                                                                   //@synthesize nuxID=_nuxID - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                                  //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy) FBQuickPromotionClause * rootClause;                                                //@synthesize rootClause=_rootClause - In the implementation block
@property (nonatomic,__weak,readonly) FBQuickPromotionCoordinator * quickPromotionCoordinator; 
@property (nonatomic,__weak,readonly) FBQuickPromotionFiltersHelper * filtersHelper; 
@property (nonatomic,copy,readonly) NSString * promotionID; 
@property (nonatomic,copy,readonly) NSArray * triggers; 
@property (nonatomic,readonly) int priority; 
@property (nonatomic,readonly) NSDate * startTime; 
@property (nonatomic,readonly) NSDate * endTime; 
@property (nonatomic,copy,readonly) NSString * templatename; 
@property (nonatomic,copy,readonly) NSDictionary * instanceLogData; 
@property (nonatomic,copy,readonly) NSDictionary * templateParameters; 
@property (nonatomic,readonly) int clientTTLSeconds; 
@property (nonatomic,copy,readonly) NSString * customRendererType; 
@property (nonatomic,copy) NSDictionary * triggerContext;                                                      //@synthesize triggerContext=_triggerContext - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * eventLimitMap; 
@property (nonatomic,readonly) FBQPCreative * creative; 
@property (nonatomic,copy) NSString * activeTrigger;                                                           //@synthesize activeTrigger=_activeTrigger - In the implementation block
@property (nonatomic,copy,readonly) NSArray * creatives; 
@property (getter=isExposureHoldout,nonatomic,readonly) char exposureHoldout; 
@property (getter=shouldLogEligibilityWaterfall,nonatomic,readonly) char logEligibilityWaterfall; 
-(FBQuickPromotionCoordinator *)quickPromotionCoordinator;
-(NSString *)nuxID;
-(id)handleButtonTapEvent:(id)arg1 ;
-(FBQPCreative *)creative;
-(NSString *)templatename;
-(NSDictionary *)templateParameters;
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(char)isReadyForDisplayWithDebugInfo:(id*)arg1 ;
-(char)fetchResourcesForDisplay;
-(FBQuickPromotionFiltersHelper *)filtersHelper;
-(FBQuickPromotionClause *)rootClause;
-(NSString *)promotionID;
-(id)rawJSON;
-(void)setNuxID:(NSString *)arg1 ;
-(NSString *)customRendererType;
-(NSDictionary *)triggerContext;
-(void)setActiveTrigger:(NSString *)arg1 ;
-(NSString *)activeTrigger;
-(char)isExposureHoldout;
-(char)disableCoolDown;
-(id)initWithSession:(id)arg1 promotionEntity:(id)arg2 nuxID:(id)arg3 ;
-(void)setTriggerContext:(NSDictionary *)arg1 ;
-(id)handleButtonTapEvent:(id)arg1 withTriggerContext:(id)arg2 ;
-(id)actionForButtonTapEvent:(id)arg1 ;
-(NSDictionary *)eventLimitMap;
-(id)_customizeCreative:(id)arg1 withTriggerContext:(id)arg2 ;
-(void)setRootClause:(FBQuickPromotionClause *)arg1 ;
-(void)setMaxImpressions:(int)arg1 ;
-(int)maxImpressions;
-(NSDictionary *)instanceLogData;
-(NSArray *)creatives;
-(int)clientTTLSeconds;
-(char)shouldLogEligibilityWaterfall;
-(unsigned)occurrenceCountForEvent:(id)arg1 ;
-(id)lastOccurrenceTime:(id)arg1 ;
-(id)originalCreative;
-(void)setPromotionID:(NSString *)arg1 ;
-(id)description;
-(void)setStartTime:(NSDate *)arg1 ;
-(char)isValid;
-(void)setFilters:(NSArray *)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(NSArray *)filters;
-(NSDate *)startTime;
-(void)logEvent:(id)arg1 ;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

