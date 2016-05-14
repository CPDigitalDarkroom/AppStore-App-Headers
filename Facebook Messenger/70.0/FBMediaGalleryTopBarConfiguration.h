/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:08 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMediaPickerSession, NSString;

@interface FBMediaGalleryTopBarConfiguration : NSObject {

	char _selectButtonEnabled;
	char _backButtonHidden;
	unsigned _selectionTitleValue;
	unsigned _backButtonStyle;
	FBMediaPickerSession* _session;
	NSString* _title;
	float _topLayoutGuideLength;

}

@property (assign,nonatomic) unsigned selectionTitleValue;                //@synthesize selectionTitleValue=_selectionTitleValue - In the implementation block
@property (assign,nonatomic) unsigned backButtonStyle;                    //@synthesize backButtonStyle=_backButtonStyle - In the implementation block
@property (assign,nonatomic) char selectButtonEnabled;                    //@synthesize selectButtonEnabled=_selectButtonEnabled - In the implementation block
@property (assign,nonatomic) char backButtonHidden;                       //@synthesize backButtonHidden=_backButtonHidden - In the implementation block
@property (nonatomic,retain) FBMediaPickerSession * session;              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) float topLayoutGuideLength;                  //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(void)setTopLayoutGuideLength:(float)arg1 ;
-(float)topLayoutGuideLength;
-(id)initWithSelectionTitleValue:(unsigned)arg1 backButtonStyle:(unsigned)arg2 selectButtonEnabled:(char)arg3 backButtonHidden:(char)arg4 title:(id)arg5 topLayoutGuideLength:(float)arg6 session:(id)arg7 ;
-(unsigned)selectionTitleValue;
-(void)setSelectionTitleValue:(unsigned)arg1 ;
-(unsigned)backButtonStyle;
-(void)setBackButtonStyle:(unsigned)arg1 ;
-(char)selectButtonEnabled;
-(void)setSelectButtonEnabled:(char)arg1 ;
-(char)backButtonHidden;
-(void)setBackButtonHidden:(char)arg1 ;
-(FBMediaPickerSession *)session;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSession:(FBMediaPickerSession *)arg1 ;
@end

