/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/IDWidget.h>

@class IDImageData, IDModel;

@interface IDImage : IDWidget {

	char _imageDataDirty;
	char _imageIdDirty;
	char _positionDirty;
	char _sizeDirty;
	char _clearWhileSending;
	IDImageData* _imageData;
	int _imageId;
	IDModel* _imageModel;
	/*^block*/id _completionHandler;
	CGPoint _position;
	CGSize _size;

}

@property (nonatomic,retain) IDImageData * imageData;              //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) int imageId;                          //@synthesize imageId=_imageId - In the implementation block
@property (assign,nonatomic) CGPoint position;                     //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) CGSize size;                          //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) IDModel * imageModel;               //@synthesize imageModel=_imageModel - In the implementation block
@property (assign,nonatomic) char imageDataDirty;                  //@synthesize imageDataDirty=_imageDataDirty - In the implementation block
@property (assign,nonatomic) char imageIdDirty;                    //@synthesize imageIdDirty=_imageIdDirty - In the implementation block
@property (assign,nonatomic) char positionDirty;                   //@synthesize positionDirty=_positionDirty - In the implementation block
@property (assign,nonatomic) char sizeDirty;                       //@synthesize sizeDirty=_sizeDirty - In the implementation block
@property (assign,nonatomic) char clearWhileSending;               //@synthesize clearWhileSending=_clearWhileSending - In the implementation block
@property (copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)initWithWidgetId:(int)arg1 ;
-(char)positionDirty;
-(void)setPositionDirty:(char)arg1 ;
-(id)initWithWidgetId:(int)arg1 imageModel:(id)arg2 ;
-(IDModel *)imageModel;
-(void)setImageData:(id)arg1 clearWhileSending:(char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setImageData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setImageDataDirty:(char)arg1 ;
-(void)setImageIdDirty:(char)arg1 ;
-(void)setSizeDirty:(char)arg1 ;
-(char)imageIdDirty;
-(char)sizeDirty;
-(char)imageDataDirty;
-(void)setImageData:(id)arg1 clearWhileSending:(char)arg2 ;
-(char)clearWhileSending;
-(id)initWithWidgetId:(int)arg1 model:(id)arg2 ;
-(void)setClearWhileSending:(char)arg1 ;
-(void)hmiDidStartForApplication:(id)arg1 ;
-(int)imageId;
-(void)setImageId:(int)arg1 ;
-(IDImageData *)imageData;
-(CGSize)size;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)setImageData:(IDImageData *)arg1 ;
-(void)flush:(int)arg1 ;
@end

