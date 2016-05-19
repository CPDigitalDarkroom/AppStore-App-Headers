/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:52 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSHashTable;

@interface SPTDataLoaderResolver : NSObject {

	NSMutableDictionary* _resolverHost;
	NSHashTable* _addresses;

}

@property (nonatomic,retain) NSMutableDictionary * resolverHost;              //@synthesize resolverHost=_resolverHost - In the implementation block
@property (nonatomic,retain) NSHashTable * addresses;                         //@synthesize addresses=_addresses - In the implementation block
-(void)setAddresses:(id)arg1 forHost:(id)arg2 ;
-(id)addressForHost:(id)arg1 ;
-(NSMutableDictionary *)resolverHost;
-(id)resolverAddressForAddress:(id)arg1 ;
-(void)markAddressAsUnreachable:(id)arg1 ;
-(void)setResolverHost:(NSMutableDictionary *)arg1 ;
-(void)setAddresses:(NSHashTable *)arg1 ;
-(NSHashTable *)addresses;
-(id)init;
@end

