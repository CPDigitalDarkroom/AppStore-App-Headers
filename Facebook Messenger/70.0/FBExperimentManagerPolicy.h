/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBExperimentManagerPolicy <NSObject>
@required
-(char)isEmployee;
-(id)allExperimentsInCatalogAsShortDescription;
-(id)gatekeepers;
-(char)sessionless;
-(id)plistKey;
-(void)fetchWithExperimentCatalog:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 withAllGroupsAndParameters:(char)arg3 scenePath:(id)arg4;
-(void)setupDebugHelperWithExperimentCatalog:(id)arg1 debugInfoProvider:(id)arg2;
-(void)loadExperiments:(/*^block*/id)arg1;
-(void)loadOverrides:(/*^block*/id)arg1;
-(void)persistExperiments:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)persistOverrides:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(double)expirationTimeIntervalInSeconds;
-(id)keyValueStore;

@end

