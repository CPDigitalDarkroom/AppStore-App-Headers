/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMagicStoryAssetProtocol.h>

@protocol FBAssetProtocol;
@class NSString;

@interface FBMagicStoryLocalAsset : NSObject <FBMagicStoryAssetProtocol> {

	id<FBAssetProtocol> _fbAsset;
	unsigned _indexHint;
	NSString* _cachedUniqueId;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetForFbAsset:(id)arg1 indexHint:(unsigned)arg2 ;
-(unsigned)indexHint;
-(char)bestFrameMode;
-(id)fbAssets;
-(char)isRemoteAsset;
-(id)remoteAsset;
-(id)localAsset;
-(unsigned)assetCount;
-(unsigned)bestFrame;
-(id)initWithFbAsset:(id)arg1 indexHint:(unsigned)arg2 ;
-(id)cellReuseIdentifier;
-(id)creationDate;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)location;
-(id)uniqueId;
-(CGSize)dimensions;
-(void)configureCell:(id)arg1 ;
-(id)descriptionDictionary;
-(unsigned)assetType;
@end

