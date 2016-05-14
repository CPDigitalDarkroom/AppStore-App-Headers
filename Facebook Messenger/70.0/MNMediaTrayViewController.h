/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAssetsLibraryListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaTrayViewPhotoCellDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaTrayViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaTrayNuxViewControllerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNHorizontalLineLayoutDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMediaPickerPresentationListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNPhotoEditingCacheListener.h>

@protocol MNMediaTrayAnalyticsLogging, MNAlertControllerPresenting, MNMediaTrayViewControllerDelegate;
@class MNMediaTrayView, MNMediaTraySelectedImageGenerator, MNMediaTrayVisibilityListeningAnnouncer, MNPermissionsViewController, MNPhotoImageUploadResultCacher, MNLocalAssetAccessibilityLabelGenerator, FBAssetsLibrary, MNMediaTrayNuxViewController, NSString, NSIndexPath, MNMediaTrayConfiguration, MNPhotoEditingCache, FBViewStateDebouncer, NSArray, MNMediaTrayViewModel, MNLocalAssetsLoader, UIColor;

@interface MNMediaTrayViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, FBAssetsLibraryListener, MNMediaTrayViewPhotoCellDelegate, MNMediaTrayViewDelegate, MNMediaTrayNuxViewControllerDelegate, MNHorizontalLineLayoutDelegate, MNMediaPickerPresentationListener, MNPhotoEditingCacheListener> {

	MNMediaTrayView* _mediaTrayView;
	char _isVisible;
	char _collectionViewNeedsReload;
	char _shouldShowNuxSection;
	id<MNMediaTrayAnalyticsLogging> _analyticsLogger;
	MNMediaTraySelectedImageGenerator* _selectedImageGenerator;
	MNMediaTrayVisibilityListeningAnnouncer* _visibilityAnnouncer;
	MNPermissionsViewController* _permissionsViewController;
	MNPhotoImageUploadResultCacher* _uploadResultCacher;
	id<MNAlertControllerPresenting> _alertControllerPresenter;
	float _scrollViewXOffset;
	MNLocalAssetAccessibilityLabelGenerator* _assetAccessibilityLabelGenerator;
	FBAssetsLibrary* _assetsLibrary;
	MNMediaTrayNuxViewController* _nuxViewController;
	NSString* _applicationName;
	NSIndexPath* _selectedIndexPathForSingleSelectionOnly;
	MNMediaTrayConfiguration* _config;
	MNPhotoEditingCache* _photoEditingCache;
	FBViewStateDebouncer* _debouncer;
	NSArray* _assetIds;
	MNMediaTrayViewModel* _mediaTrayViewModel;
	id<MNMediaTrayViewControllerDelegate> _delegate;
	MNLocalAssetsLoader* _assetsLoader;
	UIColor* _tintColor;

}

@property (assign,nonatomic,__weak) id<MNMediaTrayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) MNLocalAssetsLoader * assetsLoader;                               //@synthesize assetsLoader=_assetsLoader - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectedAssetsIndexPaths; 
@property (nonatomic,retain) UIColor * tintColor;                                                //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)selectedAssetsIndexPaths;
-(void)loadSelectedAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithMediaAccessibilityLabelGenerator:(id)arg1 mediaTrayAnalyticsLogger:(id)arg2 nuxViewController:(id)arg3 applicationName:(id)arg4 uploadResultCacher:(id)arg5 mediaTrayConfiguration:(id)arg6 photoEditingCache:(id)arg7 alertControllerPresenter:(id)arg8 ;
-(void)centerToCellAtIndexPathOnNextBoundsChange:(id)arg1 ;
-(void)_dismissAlertController;
-(void)scrollToBeginningAnimated:(char)arg1 ;
-(void)didPresentPhotoPicker;
-(void)didDismissPhotoPickerWithAttachmentsSelected:(char)arg1 ;
-(void)_initPermissionsViewControllerIfNecessary;
-(void)assetsLibraryDidLoadAssets;
-(void)setMediaTrayViewModel:(id)arg1 ;
-(void)selectItemAtIndexInMediaSection:(int)arg1 ;
-(MNLocalAssetsLoader *)assetsLoader;
-(void)_orientationChanged;
-(void)mediaTrayNuxViewControllerDidTapDismissButton:(id)arg1 ;
-(void)mediaTrayNuxViewControllerDidUpdateOrientation:(id)arg1 ;
-(id)_cellReuseIdentifierPhoto;
-(id)_cellReuseIdentifierVideo;
-(void)_assetsLibraryPermissionGranted;
-(void)_assetsLibraryPermissionDenied;
-(void)_reloadCollectionViewIfNeededOrNuxStateChanged;
-(void)_startVideoPlaybackForVisibleCells;
-(void)_stopVideoPlaybackForVisibleCells;
-(void)_updateActionViewLeftMarginIfNeeded;
-(char)_hasValidSelectedAssets;
-(id)_selectedIndexPaths;
-(char)_isVideoTooLongAtIndex:(int)arg1 ;
-(id)_durationForAssetAtIndex:(int)arg1 ;
-(void)_deselectSelectedItemAndNotifyDelegate:(char)arg1 ;
-(void)_enumerateVisibleVideoCellsUsingBlock:(/*^block*/id)arg1 ;
-(void)_setNeedsReloadCollectionView;
-(char)_isPhotoCellAtIndex:(int)arg1 ;
-(char)_isVideoCellAtIndex:(int)arg1 ;
-(void)_nudgeCellAtIndexPathIntoViewIfNeeded:(id)arg1 ;
-(void)_selectedIndexPathsDidUpdate;
-(void)_updateActionViewVisibility;
-(id)_assetTypeAtIndex:(int)arg1 ;
-(void)_reloadCollectionViewIfNeeded;
-(char)_canReloadCollectionView;
-(int)_numMediaItemsToShow;
-(void)_warmAssetsIfNeeded;
-(void)_didFinishBatchUpdateWithNewAssetIds:(id)arg1 ;
-(void)_updateSelectedIndexPathForSingleSelectionIfNeeded;
-(char)_shouldShowActionView;
-(void)_requestThumbnailForCell:(id)arg1 ;
-(id)_editedPhotoThumbnailForAssetID:(id)arg1 ;
-(void)_generateBlurredThumbnailForCellIfNeeded:(id)arg1 ;
-(void)_attemptToFetchAnimatedGIFForCell:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_handleAnimatedGIFData:(id)arg1 forCell:(id)arg2 withAssetURL:(id)arg3 ;
-(float)_sanitizedAspectRatioForCellAtIndexPath:(id)arg1 ;
-(void)_deselectItemAtIndexPath:(id)arg1 notifyDelegate:(char)arg2 ;
-(void)_didSelectIndexPath:(id)arg1 ;
-(void)_didDeselectIndexPath:(id)arg1 notifyDelegate:(char)arg2 ;
-(void)_showReachSelectionLimitAlert;
-(CGRect)_frameAheadOfMediaSection;
-(void)_assertAndDeselectCellForIndex:(int)arg1 ;
-(void)_didSelectEditPhotoAtIndex:(int)arg1 ;
-(void)_showCouldNotEditPhotoError:(id)arg1 ;
-(void)_updateThumbnailForVisibleCells;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)mediaTrayViewPhotoCellDidSelectSendCell:(id)arg1 ;
-(void)mediaTrayViewPhotoCellDidSelectEditCell:(id)arg1 ;
-(char)mediaTrayViewPhotoCellShouldShowCheckMark:(id)arg1 ;
-(void)mediaTrayViewDidSelectPhotoPicker:(id)arg1 ;
-(void)mediaTrayViewDidSelectSendSelectedAssets:(id)arg1 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 aspectRatioForCellAtIndexPath:(id)arg3 ;
-(void)photoEditingCacheDidUpdate;
-(float)scrollViewXOffset;
-(void)_showCouldNotSendPhotoError:(id)arg1 ;
-(void)deselectAllAssets;
-(void)setDelegate:(id<MNMediaTrayViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<MNMediaTrayViewControllerDelegate>)delegate;
-(id)indexPathsForVisibleItems;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(void)loadView;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(char)_allowsMultipleSelection;
-(void)_reloadCollectionView;
@end

