/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:16 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSMutableDictionary, NSDictionary;

@interface FBQuickPromotionFiltersHelper : NSObject {

	FBUserSession* _session;
	NSMutableDictionary* _filterOverrideMap;
	NSDictionary* _filterKeyClassMap;

}

@property (nonatomic,copy) NSDictionary * filterKeyClassMap;              //@synthesize filterKeyClassMap=_filterKeyClassMap - In the implementation block
+(id)_registeredFilters;
-(id)_filterFromJson:(id)arg1 withPromotion:(id)arg2 ;
-(char)checkFilter:(id)arg1 withContext:(id)arg2 withDebugInfo:(id*)arg3 ;
-(int)filterOverrideForFilterTypeKey:(id)arg1 ;
-(id)overrideStringWithEnum:(int)arg1 ;
-(id)filtersFromJSON:(id)arg1 withPromotion:(id)arg2 ;
-(char)checkAllFiltersForPromotion:(id)arg1 withContext:(id)arg2 withDebugInfo:(id*)arg3 ;
-(void)resetFilterOverrides;
-(void)setFilterOverrideForFilterTypeKey:(id)arg1 override:(int)arg2 ;
-(NSDictionary *)filterKeyClassMap;
-(void)setFilterKeyClassMap:(NSDictionary *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

