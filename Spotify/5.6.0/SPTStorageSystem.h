/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Spotify/Spotify-Structs.h>
@class SPCore;

@interface SPTStorageSystem : NSObject {

	scoped_connection* _core_event_connection;
	StorageSystem* _storageSystem;
	SPCore* _core;

}

@property (assign,nonatomic) StorageSystem* storageSystem;              //@synthesize storageSystem=_storageSystem - In the implementation block
@property (assign,nonatomic,__weak) SPCore * core;                      //@synthesize core=_core - In the implementation block
+(id)storageSystemWithCore:(id)arg1 ;
-(SPCore *)core;
-(void)setCore:(SPCore *)arg1 ;
-(id)initWithCore:(id)arg1 ;
-(StorageSystem*)storageSystem;
-(void)offlineFilesSizeWithCompletion:(/*^block*/id)arg1 ;
-(void)cachedFilesSizeWithCompletion:(/*^block*/id)arg1 ;
-(void)removeAllCachedDataWithCompletion:(/*^block*/id)arg1 ;
-(void)setStorageSystem:(StorageSystem*)arg1 ;
-(void)imageForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAllDataWithCompletion:(/*^block*/id)arg1 ;
@end

