/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTableViewController.h>
#import <Spotify/SPTEntityTableHeaderViewNavigationBarProvider.h>
#import <Spotify/SPTImageLoaderDelegate.h>
#import <Spotify/SPTPreviewViewModelDelegate.h>

@protocol SPTImageLoader;
@class NSURL, SPTEntityTableHeaderView, SPTPreviewViewModel, SPTPreviewTableViewDataSource, SPTProgressView, NSString;

@interface SPTPreviewNotLoggedInViewController : SPTableViewController <SPTEntityTableHeaderViewNavigationBarProvider, SPTImageLoaderDelegate, SPTPreviewViewModelDelegate> {

	NSURL* _viewURL;
	id<SPTImageLoader> _imageLoader;
	SPTEntityTableHeaderView* _headerView;
	SPTPreviewViewModel* _viewModel;
	SPTPreviewTableViewDataSource* _datasource;
	SPTProgressView* _progressView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSURL * viewURL;                                         //@synthesize viewURL=_viewURL - In the implementation block
@property (nonatomic,retain) id<SPTImageLoader> imageLoader;                          //@synthesize imageLoader=_imageLoader - In the implementation block
@property (nonatomic,retain) SPTEntityTableHeaderView * headerView;                   //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) SPTPreviewViewModel * viewModel;                         //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) SPTPreviewTableViewDataSource * datasource;              //@synthesize datasource=_datasource - In the implementation block
@property (nonatomic,retain) SPTProgressView * progressView;                          //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                        //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applyThemeLayout;
-(id<SPTImageLoader>)imageLoader;
-(void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5 ;
-(void)setImageLoader:(id<SPTImageLoader>)arg1 ;
-(void)viewModel:(id)arg1 setLoading:(char)arg2 ;
-(void)setupHeaderView;
-(void)setupTableView;
-(NSURL *)viewURL;
-(id)provideNavigationBarForHeaderView:(id)arg1 ;
-(void)setViewURL:(NSURL *)arg1 ;
-(void)showLoginScreenDialog;
-(void)showLoginScreen;
-(id)URLforHeaderImage:(id)arg1 ;
-(void)viewModel:(id)arg1 didLoadWithError:(id)arg2 ;
-(id)initWithURL:(id)arg1 webTokenController:(id)arg2 imageLoader:(id)arg3 completion:(/*^block*/id)arg4 ;
-(SPTPreviewViewModel *)viewModel;
-(void)setDatasource:(SPTPreviewTableViewDataSource *)arg1 ;
-(void)setViewModel:(SPTPreviewViewModel *)arg1 ;
-(SPTPreviewTableViewDataSource *)datasource;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(SPTEntityTableHeaderView *)headerView;
-(void)setHeaderView:(SPTEntityTableHeaderView *)arg1 ;
-(void)setProgressView:(SPTProgressView *)arg1 ;
-(SPTProgressView *)progressView;
@end

