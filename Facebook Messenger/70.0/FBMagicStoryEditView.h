/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBMagicStoryBurstPhotoEditAssetCellDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol FBMagicStoryEditViewDelegate;
@class UICollectionView, UIButton, FBMagicStoryBurstPhotoDetailDataSource, FBMagicStoryBurstEditDetailView, FBMagicStoryEditAssetDataSource, UIView, NSString;

@interface FBMagicStoryEditView : UIView <FBMagicStoryBurstPhotoEditAssetCellDelegate, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	SCD_Struct_FB51 _startingVideoTime;
	UIButton* _cancelButton;
	CGPoint _startingDragOffset;
	FBMagicStoryBurstPhotoDetailDataSource* _burstEditDetailDataSource;
	FBMagicStoryBurstEditDetailView* _burstEditDetailView;
	unsigned _startingBurstFrame;
	char _shouldBurstAnimateOnEndDrag;
	FBMagicStoryEditAssetDataSource* _dataSource;
	char _burstEditDetailMode;
	id<FBMagicStoryEditViewDelegate> _delegate;
	UIView* _overlayView;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryEditViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * overlayView;                                        //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,readonly) UIView * detailView; 
@property (nonatomic,readonly) UIView * tapToCloseTarget; 
@property (assign,nonatomic) char burstEditDetailMode;                                      //@synthesize burstEditDetailMode=_burstEditDetailMode - In the implementation block
@property (assign,nonatomic) unsigned currentBurstIndex; 
@property (nonatomic,readonly) char isBurstAnimating; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemoveButtonShown:(char)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 dataSource:(id)arg2 burstDetailViewDelegate:(id)arg3 ;
-(id)assetViewToHideOnTransition;
-(UIView *)tapToCloseTarget;
-(void)updateCollectionWithDeletedIndexPaths:(id)arg1 insertedIndexPaths:(id)arg2 ;
-(void)setCurrentBurstIndex:(unsigned)arg1 ;
-(void)layoutBurstEditDetailViewToInitialFrame;
-(unsigned)currentBurstIndex;
-(void)playShownVideo;
-(void)pauseShownVideo;
-(void)setBurstEditDetailMode:(char)arg1 ;
-(void)setBurstToIndex:(unsigned)arg1 animated:(char)arg2 ;
-(id)viewOrLayerForAssetAtIndex:(unsigned)arg1 ;
-(SCD_Struct_FB51)currentTimeForShownVideo;
-(char)isEditingVideoCell;
-(void)togglePlayingStateOnVideo;
-(void)stopBurstAnimation;
-(char)isBurstAnimating;
-(void)startBurstAnimation;
-(void)updateWithBurstAsset:(id)arg1 stayingOnSameBurst:(char)arg2 shouldPlay:(char)arg3 session:(id)arg4 ;
-(void)_layoutBurstEditDetailViewWithAnimation:(char)arg1 ;
-(id)_currentCell;
-(void)_fixAccessibilityScrolling;
-(void)burstPhotoEditAssetCellDidChangeIndex:(unsigned)arg1 ;
-(char)burstEditDetailMode;
-(UIView *)detailView;
-(void)_handleCancel;
-(void)setDelegate:(id<FBMagicStoryEditViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBMagicStoryEditViewDelegate>)delegate;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIView *)overlayView;
@end

