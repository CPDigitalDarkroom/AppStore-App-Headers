/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNViewController.h>
#import <Twitter/T1ResizableHeaderViewDelegate.h>
#import <Twitter/TFNTwitterCompositionSource.h>
#import <TFNUI/TFNDownloadDelegate.h>

@protocol T1NewsContainerContaineeTFNTwitterCompositionSource;
@class TFNDataViewController, T1NewEventHeaderView, UIView, TFNDownload, UIScrollView, NSString;

@interface T1NewsContainerViewController : TFNViewController <T1ResizableHeaderViewDelegate, TFNTwitterCompositionSource, TFNDownloadDelegate> {

	TFNDataViewController*<T1NewsContainerContainee>*<TFNTwitterCompositionSource> _dataViewController;
	T1NewEventHeaderView* _headerView;
	UIView* _headerContainerView;
	UIView* _dataContainerView;
	TFNDownload* _imageDownload;

}

@property (nonatomic,retain) T1NewEventHeaderView * headerView;                                                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * headerContainerView;                                                                                   //@synthesize headerContainerView=_headerContainerView - In the implementation block
@property (nonatomic,retain) UIView * dataContainerView;                                                                                     //@synthesize dataContainerView=_dataContainerView - In the implementation block
@property (nonatomic,retain) TFNDownload * imageDownload;                                                                                    //@synthesize imageDownload=_imageDownload - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) float headerCollapsedHeight; 
@property (nonatomic,readonly) float headerNaturalHeight; 
@property (nonatomic,retain) TFNDataViewController*<T1NewsContainerContainee>*<TFNTwitterCompositionSource> dataViewController;              //@synthesize dataViewController=_dataViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scribePage;
-(id)scribeSection;
-(void)resizableHeaderViewDidUpdatePreferredSize:(id)arg1 ;
-(void)resizableHeaderViewDidTapBannerImage:(id)arg1 ;
-(void)resizableHeaderViewDidTapSearchButton:(id)arg1 ;
-(void)resizableHeaderViewDidTapComposeButton:(id)arg1 ;
-(void)resizableHeaderViewDidLongPressComposeButton:(id)arg1 ;
-(void)resizableHeaderViewDidTapBackButton:(id)arg1 ;
-(TFNDownload *)imageDownload;
-(void)setImageDownload:(TFNDownload *)arg1 ;
-(void)setDataViewController:(TFNDataViewController*<T1NewsContainerContainee>*<TFNTwitterCompositionSource>)arg1 ;
-(void)setDataContainerView:(UIView *)arg1 ;
-(UIView *)dataContainerView;
-(float)_currentExpansionPercentage;
-(void)_layoutContainerViewsWithExpansionPercentage:(float)arg1 ;
-(void)_unloadDataViewController;
-(void)_loadDataViewController;
-(float)headerCollapsedHeight;
-(float)headerNaturalHeight;
-(float)headerSpacing;
-(TFNDataViewController*<T1NewsContainerContainee>*<TFNTwitterCompositionSource>)dataViewController;
-(void)statusChangedForDownload:(id)arg1 ;
-(void)tfn_contentScrollViewDidScroll:(id)arg1 animate:(char)arg2 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(void)layoutGuidesDidChange:(int)arg1 ;
-(float)lengthOfLayoutGuide:(int)arg1 forEnvironment:(id)arg2 ;
-(void)setHeaderContainerView:(UIView *)arg1 ;
-(UIView *)headerContainerView;
-(void)dealloc;
-(NSString *)description;
-(int)preferredStatusBarStyle;
-(unsigned)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(T1NewEventHeaderView *)headerView;
-(void)setHeaderView:(T1NewEventHeaderView *)arg1 ;
-(id)composition;
@end

