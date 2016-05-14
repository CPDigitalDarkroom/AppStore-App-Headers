/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBToastContainerViewDelegate.h>

@class FBListViewScrollManager, FBLazyCreator, MNLoadingView, UICollectionView, FBToastContainerView, NSString;

@interface MNGroupsView : UIView <FBToastContainerViewDelegate> {

	FBListViewScrollManager* _scrollManager;
	FBLazyCreator* _loadingViewCreator;
	MNLoadingView* _loadingView;
	unsigned _viewState;
	UICollectionView* _groupsCollectionView;
	FBToastContainerView* _toastContainerView;

}

@property (assign,nonatomic) unsigned viewState;                                       //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) UICollectionView * groupsCollectionView;                //@synthesize groupsCollectionView=_groupsCollectionView - In the implementation block
@property (nonatomic,readonly) FBToastContainerView * toastContainerView;              //@synthesize toastContainerView=_toastContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_layoutToastContainerView;
-(void)_updateCollectionViewContentInset;
-(CGRect)_topToastViewFrame;
-(FBToastContainerView *)toastContainerView;
-(UICollectionView *)groupsCollectionView;
-(void)setViewState:(unsigned)arg1 animated:(char)arg2 ;
-(id)_viewForViewState:(unsigned)arg1 ;
-(void)_toastContainerViewWillChangeWithDuration:(double)arg1 ;
-(void)_updateTableViewContentInsets;
-(void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2 ;
-(void)scrollToBottomAnimated:(char)arg1 ;
-(CGRect)_toastViewFrame;
-(void)scrollToTopAnimated:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(unsigned)viewState;
-(void)setViewState:(unsigned)arg1 ;
@end

