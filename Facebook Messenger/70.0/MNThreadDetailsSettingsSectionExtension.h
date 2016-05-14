/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNThreadDetailsSectionExtension.h>

@protocol FBMProfileURLUtils, MNThreadDetailsSectionExtensionDelegate;
@class MNThreadViewModel, MNThreadDetailsTableViewCellIconsConfiguration, MNThreadDetailsPageConfiguration, NSString;

@interface MNThreadDetailsSettingsSectionExtension : NSObject <MNThreadDetailsSectionExtension> {

	MNThreadViewModel* _threadViewModel;
	MNThreadDetailsTableViewCellIconsConfiguration* _iconsConfiguration;
	MNThreadDetailsPageConfiguration* _pageConfiguration;
	id<FBMProfileURLUtils> _profileURLUtils;
	id<MNThreadDetailsSectionExtensionDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNThreadDetailsSectionExtensionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)threadViewModel;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(void)tearDownThreadViewModelDependencies;
-(id)cellForRowIndex:(unsigned)arg1 ;
-(void)handleSelectionForRowIndex:(unsigned)arg1 ;
-(char)shouldHighlightCellForRowAtIndex:(unsigned)arg1 ;
-(float)heightForFooterWithWidth:(float)arg1 ;
-(id)viewForFooterOfThreadDetailsSection;
-(unsigned)_settingsRowForRowIndex:(int)arg1 ;
-(void)_handleViewTimelineAction;
-(id)initWithIconsConfiguration:(id)arg1 threadDetailsPageConfiguration:(id)arg2 profileURLUtils:(id)arg3 ;
-(void)setDelegate:(id<MNThreadDetailsSectionExtensionDelegate>)arg1 ;
-(id<MNThreadDetailsSectionExtensionDelegate>)delegate;
-(unsigned)numberOfRows;
@end

