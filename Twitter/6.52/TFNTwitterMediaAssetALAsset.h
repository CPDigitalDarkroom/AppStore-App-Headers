/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterMediaAsset.h>

@protocol TFNPhotoAsset;
@class TFNTwitterLocation, TFNPhotoFetchResultCompletionObserver, NSMutableArray, NSString, ALAsset, NSURL, UIImage;

@interface TFNTwitterMediaAssetALAsset : TFNTwitterMediaAsset {

	id<TFNPhotoAsset> _asset;
	TFNTwitterLocation* _location;
	char _needsRequestAsset;
	TFNPhotoFetchResultCompletionObserver* _assetCompletionObserver;
	NSMutableArray* _assetCompletionHandlers;
	CGSize _assetDimensions;
	int _localBackupState;
	NSString* _localBackupFilename;
	NSString* _localBackupDocumentsDirectory;
	ALAsset* _originalAsset;
	char _assetSavedToLibrary;
	NSURL* _assetsLibraryURL;
	NSString* _localIdentifier;
	UIImage* _cachedPreview;

}

@property (nonatomic,retain) UIImage * cachedPreview;                      //@synthesize cachedPreview=_cachedPreview - In the implementation block
@property (nonatomic,readonly) NSURL * assetsLibraryURL;                   //@synthesize assetsLibraryURL=_assetsLibraryURL - In the implementation block
@property (nonatomic,readonly) NSString * localIdentifier;                 //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (assign,nonatomic) char assetSavedToLibrary;                     //@synthesize assetSavedToLibrary=_assetSavedToLibrary - In the implementation block
@property (nonatomic,readonly) TFNTwitterLocation * location; 
+(id)objectIdentifierForPhotoAsset:(id)arg1 ;
+(CGSize)_previewTargetSize;
+(id)_localBackupQueue;
+(id)_previewRenderQueue;
-(void)renderPreviewWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)estimatedPreviewSizeThatFits:(CGSize)arg1 ;
-(void)mediaSizeWithCompletion:(/*^block*/id)arg1 ;
-(void)saveLocalBackupToDocumentsDirectory:(id)arg1 ;
-(void)setAssetSavedToLibrary:(char)arg1 ;
-(id)initWithPhotoAsset:(id)arg1 ;
-(char)assetSavedToLibrary;
-(void)saveAssetToLibrary:(/*^block*/id)arg1 ;
-(id)deprecatedPreview;
-(void)_dispatchWithPhotoAsset:(/*^block*/id)arg1 withFallBackToLocalBackup:(/*^block*/id)arg2 ;
-(void)_saveLocalBackupToFilePath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_didLoadBackupData:(id)arg1 ;
-(void)_deleteLocalData;
-(void)setCachedPreview:(UIImage *)arg1 ;
-(void)renderFinalDataWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeLocalBackupData;
-(void)saveLocalBackupToDocumentsDirectory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_saveAsset:(id)arg1 localFilePath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_dispatchWithPhotoAsset:(/*^block*/id)arg1 ;
-(char)_bufferedCopyFromImageData:(id)arg1 toPath:(id)arg2 ;
-(id)_localBackupFilePath;
-(void)_loadLocalBackupData:(/*^block*/id)arg1 ;
-(void)_expireCacheAfterEdits;
-(void)_dispatchWithPhotoAsset:(/*^block*/id)arg1 withFallBackToLocalBackupFileURL:(/*^block*/id)arg2 ;
-(void)_generatePreviewWithProgressHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)localIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TFNTwitterLocation *)location;
-(id)initWithAsset:(id)arg1 ;
-(UIImage *)cachedPreview;
-(id)objectIdentifier;
-(NSURL *)assetsLibraryURL;
@end

