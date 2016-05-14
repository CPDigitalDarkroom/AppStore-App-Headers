/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSSet, NSDate;

@interface SRAssetsIndexerState : NSObject {

	NSDictionary* _metadataByAssetIdentifier;
	NSSet* _deletedAssetIdentifiers;
	NSDate* _enumerationDate;

}

@property (nonatomic,copy) NSDictionary * metadataByAssetIdentifier;              //@synthesize metadataByAssetIdentifier=_metadataByAssetIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * deletedAssetIdentifiers;                       //@synthesize deletedAssetIdentifiers=_deletedAssetIdentifiers - In the implementation block
@property (nonatomic,copy) NSDate * enumerationDate;                              //@synthesize enumerationDate=_enumerationDate - In the implementation block
-(NSDictionary *)metadataByAssetIdentifier;
-(void)setMetadataByAssetIdentifier:(NSDictionary *)arg1 ;
-(void)setDeletedAssetIdentifiers:(NSSet *)arg1 ;
-(void)setEnumerationDate:(NSDate *)arg1 ;
-(NSSet *)deletedAssetIdentifiers;
-(NSDate *)enumerationDate;
-(id)description;
@end

