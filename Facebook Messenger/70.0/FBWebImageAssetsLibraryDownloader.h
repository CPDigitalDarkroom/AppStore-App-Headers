/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:12 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBWebImageDownloader.h>

@class FBAssetsLibrary, NSMutableDictionary, FBWebImageAssetsLibrarySpecifier, NSString;

@interface FBWebImageAssetsLibraryDownloader : NSObject <FBWebImageDownloader> {

	FBAssetsLibrary* _assetsLibrary;
	NSMutableDictionary* _loadInfoBySpecifier;
	FBWebImageAssetsLibrarySpecifier* _currentSpecifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadSpecifier:(id)arg1 withAssetSize:(int)arg2 downloadBlock:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleThumbnailCompletion:(id)arg1 specifier:(id)arg2 assetSize:(int)arg3 downloadBlock:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 callPath:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(id)initWithAssetsLibrary:(id)arg1 ;
-(void)cancel;
@end

