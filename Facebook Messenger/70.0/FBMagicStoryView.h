/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMagicStoryCollectionDataSourceDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMagicStoryVideoCellDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMagicStoryBurstPhotoCellDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMagicStoryDraggableCellDelegate.h>

@protocol FBMagicStoryPlayableCell, FBMagicStoryViewDelegate;
@class FBUserSession, FBMagicStoryCollectionDataSource, FBMagicStoryBurstPhotoCell, FBMagicStoriesProductionLogger, FBTimer, UIView, FBMagicStoryDraggableCell, FBKVOController, UILongPressGestureRecognizer, NSMutableDictionary, FBMagicStoryCellInfo, FBMagicStoryDragState, NSPointerArray, UICollectionView, FBMagicStoryEditableCollection, UIScrollView, NSString;

@interface FBMagicStoryView : UIView <FBMagicStoryCollectionDataSourceDelegate, FBMagicStoryVideoCellDelegate, FBMagicStoryBurstPhotoCellDelegate, UICollectionViewDelegate, UIGestureRecognizerDelegate, FBMagicStoryDraggableCellDelegate> {

	FBUserSession* _session;
	FBMagicStoryCollectionDataSource* _dataSource;
	int _viewState;
	FBMagicStoryBurstPhotoCell* _lastAnimatedCell;
	FBMagicStoriesProductionLogger* _logger;
	FBTimer* _animationTimer;
	FBTimer* _scrollTimer;
	UIView* _dragCopiesContainerView;
	FBMagicStoryDraggableCell*<FBMagicStoryPlayableCell> _currentlyPlayingCell;
	FBKVOController* _kvoController;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSMutableDictionary* _draggableCopies;
	FBMagicStoryCellInfo* _draggedCellInfo;
	FBMagicStoryCellInfo* _activeCellInfo;
	FBMagicStoryDragState* _dragState;
	float _timeTicksWhileScrolling;
	char _shouldUpdateMediaQueueOnScroll;
	NSPointerArray* _mediaPlaybackQueue;
	char _shouldAllowMediaPlayback;
	char _showingNux;
	UICollectionView* _collage;
	id<FBMagicStoryViewDelegate> _delegate;
	FBMagicStoryEditableCollection* _editableCollection;
	UIScrollView* _parentScrollView;

}

@property (nonatomic,readonly) UICollectionView * collage;                                       //@synthesize collage=_collage - In the implementation block
@property (assign,nonatomic,__weak) id<FBMagicStoryViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBMagicStoryEditableCollection * editableCollection;              //@synthesize editableCollection=_editableCollection - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * parentScrollView;                             //@synthesize parentScrollView=_parentScrollView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapRemoveButton:(id)arg1 ;
-(void)videoCellDidStartPlayback:(id)arg1 ;
-(void)videoCellDidEndPlayback:(id)arg1 ;
-(void)magicStoryCollectionDataSource:(id)arg1 willConfigureCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didConfigureCell:(id)arg2 atIndexPath:(id)arg3 ;
-(void)magicStoryCollectionDataSource:(id)arg1 didSelectAsset:(id)arg2 atRect:(CGRect)arg3 sourceView:(id)arg4 ;
-(FBMagicStoryEditableCollection *)editableCollection;
-(id)_magicStoryLayoutWithLightWash:(char)arg1 templateLayout:(id)arg2 ;
-(void)collageDidScroll;
-(void)_handleLongPress;
-(void)_stopBurstAnimations;
-(id)magicStoriesLayout;
-(void)_updatePlaybackQueueAndStartMediaPlayback:(char)arg1 ;
-(void)_playMediaCell:(id)arg1 ;
-(void)_animateNuxView:(id)arg1 hideNux:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)_basicAnimationForProperty:(id)arg1 toValue:(id)arg2 ;
-(void)_playCellAfterCurrentlyPlayingCell:(id)arg1 ;
-(void)_scrollToItemAtIndexPath:(id)arg1 ;
-(void)_startPlayingMediaQueue;
-(void)_startLayoutEditWithLongPress;
-(void)_startDragging:(CGPoint)arg1 ;
-(void)_continueDragging:(CGPoint)arg1 ;
-(void)_finishDragging:(CGPoint)arg1 ;
-(id)_getCellAt:(id)arg1 ;
-(id)_getCopyAt:(id)arg1 ;
-(char)_handleDragScrolling:(CGPoint)arg1 ;
-(id)_handleInsertAtLocation:(CGPoint)arg1 indexPathAtTouchLocation:(id)arg2 ;
-(void)_setDragState:(id)arg1 fromCell:(id)arg2 toCell:(id)arg3 copyOfDraggedCell:(id)arg4 ;
-(UIScrollView *)parentScrollView;
-(void)_removeCopy:(id)arg1 forCell:(id)arg2 atPath:(id)arg3 ;
-(void)_makeAllAssetViewsVisible;
-(void)_finishLayoutEdit;
-(void)_setCellShrink:(id)arg1 ;
-(void)_revertSwapPreviewFromCell:(id)arg1 toCell:(id)arg2 copyOfDraggedCell:(id)arg3 newDragState:(id)arg4 ;
-(void)_revertInsert:(id)arg1 newState:(id)arg2 fromCellInfo:(id)arg3 ;
-(void)_previewSwapToCell:(id)arg1 copyOfDraggedCell:(id)arg2 ;
-(void)magicStoryBurstPhotoCellDidFinishLoop:(id)arg1 ;
-(void)configureWithEditableCollection:(id)arg1 logger:(id)arg2 session:(id)arg3 scrollToTop:(char)arg4 ;
-(void)startMediaPlayback;
-(void)stopMediaPlayback;
-(void)startMediaPlaybackAtCell:(id)arg1 ;
-(void)animateRemoveButtonShownIfNeeded:(char)arg1 atCell:(id)arg2 ;
-(void)animateInNuxView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateOutNuxView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)editableCollectionDidChange:(id)arg1 fromCollection:(id)arg2 toCollection:(id)arg3 ;
-(id)_whiteOverlayEditModeColor;
-(UICollectionView *)collage;
-(void)setParentScrollView:(UIScrollView *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id<FBMagicStoryViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBMagicStoryViewDelegate>)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setViewState:(int)arg1 ;
@end

