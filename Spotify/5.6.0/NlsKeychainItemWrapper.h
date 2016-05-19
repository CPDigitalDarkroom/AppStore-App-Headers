/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:19 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NlsApiWorker;

@interface NlsKeychainItemWrapper : NSObject {

	NSMutableDictionary* keychainItemData;
	NSMutableDictionary* genericPasswordQuery;
	NSMutableDictionary* _keychainItemData;
	NSMutableDictionary* _genericPasswordQuery;
	NlsApiWorker* _worker;

}

@property (nonatomic,retain) NSMutableDictionary * keychainItemData;                  //@synthesize keychainItemData=_keychainItemData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * genericPasswordQuery;              //@synthesize genericPasswordQuery=_genericPasswordQuery - In the implementation block
@property (assign) NlsApiWorker * worker;                                             //@synthesize worker=_worker - In the implementation block
-(NlsApiWorker *)worker;
-(void)setWorker:(NlsApiWorker *)arg1 ;
-(id)initWithWorker:(id)arg1 identifier:(id)arg2 accessGroup:(id)arg3 ;
-(void)resetKeychainItem;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)secItemFormatToDictionary:(id)arg1 ;
-(void)setKeychainItemData:(NSMutableDictionary *)arg1 ;
-(void)writeToKeychain;
-(id)dictionaryToSecItemFormat:(id)arg1 ;
-(NSMutableDictionary *)keychainItemData;
-(NSMutableDictionary *)genericPasswordQuery;
-(void)setGenericPasswordQuery:(NSMutableDictionary *)arg1 ;
@end

