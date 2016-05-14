/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaPickerTaggingSearchProvider;
@class NSString, UIButton, UIColor;

@interface FBMediaAttachmentPickerControllerConfiguration : NSObject {

	char _imagePickerEditPhotoEnabled;
	char _allowsIPadSimplePicker;
	int _preferredPickerStyle;
	unsigned _preferredMediaPickerStyle;
	int _selectionCapability;
	NSString* _sessionID;
	unsigned _maxPhotosSelected;
	unsigned _maxVideoLength;
	id<FBMediaPickerTaggingSearchProvider> _taggingSearchProvider;
	UIButton* _actionButton;
	NSString* _actionTitle;
	UIColor* _previewVCBackgrounColor;

}

@property (assign,nonatomic) int preferredPickerStyle;                                                  //@synthesize preferredPickerStyle=_preferredPickerStyle - In the implementation block
@property (assign,nonatomic) unsigned preferredMediaPickerStyle;                                        //@synthesize preferredMediaPickerStyle=_preferredMediaPickerStyle - In the implementation block
@property (assign,nonatomic) int selectionCapability;                                                   //@synthesize selectionCapability=_selectionCapability - In the implementation block
@property (nonatomic,copy) NSString * sessionID;                                                        //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned maxPhotosSelected;                                                //@synthesize maxPhotosSelected=_maxPhotosSelected - In the implementation block
@property (assign,nonatomic) unsigned maxVideoLength;                                                   //@synthesize maxVideoLength=_maxVideoLength - In the implementation block
@property (assign,nonatomic) char imagePickerEditPhotoEnabled;                                          //@synthesize imagePickerEditPhotoEnabled=_imagePickerEditPhotoEnabled - In the implementation block
@property (nonatomic,retain) id<FBMediaPickerTaggingSearchProvider> taggingSearchProvider;              //@synthesize taggingSearchProvider=_taggingSearchProvider - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                                   //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,copy) NSString * actionTitle;                                                      //@synthesize actionTitle=_actionTitle - In the implementation block
@property (assign,nonatomic) char allowsIPadSimplePicker;                                               //@synthesize allowsIPadSimplePicker=_allowsIPadSimplePicker - In the implementation block
@property (assign,nonatomic) UIColor * previewVCBackgrounColor;                                         //@synthesize previewVCBackgrounColor=_previewVCBackgrounColor - In the implementation block
-(void)setPreferredPickerStyle:(int)arg1 ;
-(void)setMaxPhotosSelected:(unsigned)arg1 ;
-(void)setSelectionCapability:(int)arg1 ;
-(unsigned)maxVideoLength;
-(void)setImagePickerEditPhotoEnabled:(char)arg1 ;
-(unsigned)maxPhotosSelected;
-(int)preferredPickerStyle;
-(unsigned)preferredMediaPickerStyle;
-(void)setPreferredMediaPickerStyle:(unsigned)arg1 ;
-(int)selectionCapability;
-(void)setMaxVideoLength:(unsigned)arg1 ;
-(char)imagePickerEditPhotoEnabled;
-(id<FBMediaPickerTaggingSearchProvider>)taggingSearchProvider;
-(void)setTaggingSearchProvider:(id<FBMediaPickerTaggingSearchProvider>)arg1 ;
-(char)allowsIPadSimplePicker;
-(void)setAllowsIPadSimplePicker:(char)arg1 ;
-(UIColor *)previewVCBackgrounColor;
-(void)setPreviewVCBackgrounColor:(UIColor *)arg1 ;
-(UIButton *)actionButton;
-(id)initWithSession:(id)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setActionTitle:(NSString *)arg1 ;
-(NSString *)actionTitle;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
@end

