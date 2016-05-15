/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNTableViewCell.h>
#import <TFNUI/TFNPhotoLibraryChangeObserver.h>

@protocol TFNPhotoAssetCollection, TFNPhotoFetchResult, TFNPhotoAsset;
@class NSNumberFormatter, NSString;

@interface T1PhotoGalleryCollectionsViewCell : TFNTableViewCell <TFNPhotoLibraryChangeObserver> {

	unsigned _theme;
	id<TFNPhotoAssetCollection> _assetCollection;
	id<TFNPhotoFetchResult> _keyAssetsFetchResult;
	id<TFNPhotoAsset> _keyAsset;
	NSNumberFormatter* _assetCountFormatter;

}

@property (nonatomic,retain) id<TFNPhotoFetchResult> keyAssetsFetchResult;              //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,retain) id<TFNPhotoAsset> keyAsset;                                //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * assetCountFormatter;                 //@synthesize assetCountFormatter=_assetCountFormatter - In the implementation block
@property (assign,nonatomic) unsigned theme;                                            //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) id<TFNPhotoAssetCollection> assetCollection;               //@synthesize assetCollection=_assetCollection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateAssetCollection;
-(void)_updateTheme;
-(void)setKeyAssetsFetchResult:(id<TFNPhotoFetchResult>)arg1 ;
-(NSNumberFormatter *)assetCountFormatter;
-(void)_updateKeyAssetsFetchResult;
-(id<TFNPhotoFetchResult>)keyAssetsFetchResult;
-(void)_updateKeyAsset;
-(CGSize)_targetSizeForImageView:(CGSize)arg1 ;
-(id)_imageForImageView:(id)arg1 ;
-(void)_photoLibraryDidChange:(id)arg1 ;
-(id<TFNPhotoAssetCollection>)assetCollection;
-(id<TFNPhotoAsset>)keyAsset;
-(void)setKeyAsset:(id<TFNPhotoAsset>)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(unsigned)theme;
-(void)setTheme:(unsigned)arg1 ;
-(void)setAssetCollection:(id<TFNPhotoAssetCollection>)arg1 ;
@end

