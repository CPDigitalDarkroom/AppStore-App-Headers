/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:13 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSearchBootstrapFileManager, NSPointerArray, FBUserSession, NSOrderedSet, NSArray;

@interface FBSearchBootstrapSuggestionGeneratorService : NSObject {

	FBSearchBootstrapFileManager* _bootstrapFileManager;
	NSPointerArray* _searchIndexUnloadingBlockers;
	FBUserSession* _session;
	NSOrderedSet* _bootstrapConfigs;
	NSArray* _suggestionGenerators;
	char _delayEnabled;

}
-(void)startAppService;
-(void)stopAppService;
-(unsigned)serviceStartupLevel;
-(id)suggestionsForQuery:(id)arg1 numRequested:(unsigned)arg2 whitelistTypes:(id)arg3 simpleSearchOnly:(char)arg4 ;
-(void)loadSearchIndex:(id)arg1 ;
-(void)_loadSearchIndex;
-(id)_filteredGeneratorsForSimpleSearch;
-(void)modifyBootstrapIndexAsync:(id)arg1 options:(unsigned)arg2 ;
-(void)_unloadSearchIndex;
-(void)_setBootstrapConfigs:(id)arg1 ;
-(id)suggestionsForQuery:(id)arg1 numRequested:(unsigned)arg2 simpleSearchOnly:(char)arg3 ;
-(void)unloadIndex;
-(id)initWithSession:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
@end

