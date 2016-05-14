/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadContextViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBClassProvidable.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadViewModelConfigurable.h>

@protocol MNAuthenticationManager, MNAvatarImageDecorating, MNThreadContextCellControllerDelegate;
@class MNThreadContextView, UICollectionView, MNThreadViewModel, MNProfileImageViewController, MNThreadImageManager, MNImageCreator, FBUserSession, NSString;

@interface MNThreadContextCellController : NSObject <MNThreadContextViewDelegate, FBClassProvidable, MNThreadViewModelConfigurable> {

	MNThreadContextView* _threadContextView;
	UICollectionView* _collectionView;
	MNThreadViewModel* _threadViewModel;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadImageManager* _threadImageManager;
	id<MNAuthenticationManager> _authManager;
	MNImageCreator* _groupImageCreator;
	FBUserSession* _userSession;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	id<MNThreadContextCellControllerDelegate> _delegate;

}

@property (nonatomic,readonly) MNThreadViewModel * threadViewModel;                                  //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadContextCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(void)awakeWithCollectionView:(id)arg1 ;
-(id)layoutElements;
-(id)cellWithIndexPath:(id)arg1 inCollectionView:(id)arg2 withDelegate:(id)arg3 ;
-(id)initWithProfileImageViewController:(id)arg1 threadImageManager:(id)arg2 authManager:(id)arg3 userSession:(id)arg4 avatarImageDecoration:(id)arg5 ;
-(void)_updateThreadContextViewWithViewModel:(id)arg1 ;
-(void)_updateProfileImageView;
-(void)threadContextViewDidTapView:(id)arg1 ;
-(void)setDelegate:(id<MNThreadContextCellControllerDelegate>)arg1 ;
-(id<MNThreadContextCellControllerDelegate>)delegate;
@end

