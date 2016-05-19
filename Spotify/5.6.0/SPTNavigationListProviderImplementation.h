/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:38 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTNavigationListProvider.h>

@protocol SPTNavigationConfiguration, SPTNavigationList;
@class NSMutableDictionary, SPTNavigationListDataLoader, SPTNavigationListCache, NSString;

@interface SPTNavigationListProviderImplementation : NSObject <SPTNavigationListProvider> {

	NSMutableDictionary* _listMap;
	id<SPTNavigationConfiguration> _navigationConfiguration;
	SPTNavigationListDataLoader* _listDataLoader;
	SPTNavigationListCache* _listCache;
	id<SPTNavigationList> _list;

}

@property (nonatomic,readonly) NSMutableDictionary * listMap;                                            //@synthesize listMap=_listMap - In the implementation block
@property (assign,nonatomic,__weak) id<SPTNavigationConfiguration> navigationConfiguration;              //@synthesize navigationConfiguration=_navigationConfiguration - In the implementation block
@property (nonatomic,retain) SPTNavigationListDataLoader * listDataLoader;                               //@synthesize listDataLoader=_listDataLoader - In the implementation block
@property (nonatomic,retain) SPTNavigationListCache * listCache;                                         //@synthesize listCache=_listCache - In the implementation block
@property (nonatomic,retain) id<SPTNavigationList> list;                                                 //@synthesize list=_list - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)provideNavigationList;
-(void)registerNotifications;
-(id<SPTNavigationConfiguration>)navigationConfiguration;
-(void)setNavigationConfiguration:(id<SPTNavigationConfiguration>)arg1 ;
-(NSMutableDictionary *)listMap;
-(id)userPolicyValue;
-(id)abbaFlagValue;
-(char)isAbbaValueNilOrControl:(id)arg1 ;
-(id)defaultList;
-(SPTNavigationListDataLoader *)listDataLoader;
-(char)registerNavigationList:(id)arg1 ;
-(SPTNavigationListCache *)listCache;
-(void)loadRemoteNavigationList;
-(void)saveNavigationList;
-(id)initWithListDataLoader:(id)arg1 listCache:(id)arg2 navigationConfiguration:(id)arg3 ;
-(id)settingsValue;
-(void)setListDataLoader:(SPTNavigationListDataLoader *)arg1 ;
-(void)setListCache:(SPTNavigationListCache *)arg1 ;
-(void)dealloc;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setList:(id<SPTNavigationList>)arg1 ;
-(id<SPTNavigationList>)list;
@end

