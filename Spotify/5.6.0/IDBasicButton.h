/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/IDWidget.h>
#import <Spotify/IDFocusable.h>

@class IDImageData, IDView, IDModel;

@interface IDBasicButton : IDWidget <IDFocusable> {

	char _imageDirty;
	char _imageIdDirty;
	char _targetHmiStateIdDirty;
	IDImageData* _image;
	int _imageId;
	IDView* _targetView;
	int _selectActionId;
	int _focusActionId;
	IDModel* _imageModel;
	IDModel* _targetModel;
	int _targetHmiStateId;
	id _selectTarget;
	SEL _selectSelector;
	id _focusTarget;
	SEL _focusSelector;

}

@property (nonatomic,retain) IDImageData * image;                     //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageId;                             //@synthesize imageId=_imageId - In the implementation block
@property (assign,nonatomic) IDView * targetView;                     //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic) int selectActionId;                      //@synthesize selectActionId=_selectActionId - In the implementation block
@property (assign,nonatomic) int focusActionId;                       //@synthesize focusActionId=_focusActionId - In the implementation block
@property (nonatomic,readonly) IDModel * imageModel;                  //@synthesize imageModel=_imageModel - In the implementation block
@property (assign,nonatomic) char imageDirty;                         //@synthesize imageDirty=_imageDirty - In the implementation block
@property (assign,nonatomic) char imageIdDirty;                       //@synthesize imageIdDirty=_imageIdDirty - In the implementation block
@property (nonatomic,readonly) IDModel * targetModel;                 //@synthesize targetModel=_targetModel - In the implementation block
@property (assign,nonatomic) int targetHmiStateId;                    //@synthesize targetHmiStateId=_targetHmiStateId - In the implementation block
@property (assign,nonatomic) char targetHmiStateIdDirty;              //@synthesize targetHmiStateIdDirty=_targetHmiStateIdDirty - In the implementation block
@property (assign,nonatomic) id selectTarget;                         //@synthesize selectTarget=_selectTarget - In the implementation block
@property (assign,nonatomic) SEL selectSelector;                      //@synthesize selectSelector=_selectSelector - In the implementation block
@property (assign,nonatomic) id focusTarget;                          //@synthesize focusTarget=_focusTarget - In the implementation block
@property (assign,nonatomic) SEL focusSelector;                       //@synthesize focusSelector=_focusSelector - In the implementation block
-(void)setSelectTarget:(id)arg1 ;
-(void)setSelectSelector:(SEL)arg1 ;
-(void)setFocusTarget:(id)arg1 ;
-(void)setFocusSelector:(SEL)arg1 ;
-(int)selectActionId;
-(void)buttonSelected:(id)arg1 ;
-(void)buttonFocused:(id)arg1 ;
-(void)setImageDirty:(char)arg1 ;
-(id)selectTarget;
-(SEL)selectSelector;
-(id)focusTarget;
-(SEL)focusSelector;
-(char)imageDirty;
-(void)setSelectActionId:(int)arg1 ;
-(id)initWithWidgetId:(int)arg1 ;
-(IDModel *)imageModel;
-(void)setImageIdDirty:(char)arg1 ;
-(char)imageIdDirty;
-(void)setTarget:(id)arg1 selector:(SEL)arg2 forActionEvent:(unsigned)arg3 ;
-(IDModel *)targetModel;
-(int)targetHmiStateId;
-(void)setTargetHmiStateIdDirty:(char)arg1 ;
-(void)setTargetHmiStateId:(int)arg1 ;
-(void)flushTarget;
-(char)targetHmiStateIdDirty;
-(int)focusActionId;
-(void)setFocusActionId:(int)arg1 ;
-(id)initWithWidgetId:(int)arg1 imageModel:(id)arg2 targetModel:(id)arg3 actionId:(int)arg4 focusId:(int)arg5 ;
-(void)hmiDidStartForApplication:(id)arg1 ;
-(int)imageId;
-(void)setImageId:(int)arg1 ;
-(void)setImage:(IDImageData *)arg1 ;
-(IDImageData *)image;
-(IDView *)targetView;
-(void)setTargetView:(IDView *)arg1 ;
-(void)flush:(int)arg1 ;
@end

