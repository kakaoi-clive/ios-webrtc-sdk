//
//  RTCCustomAudioDevice.h
//  products
//
//  Created by Chance Kim on 2019/10/31.
//

#ifndef RTCCustomAudioDevice_h
#define RTCCustomAudioDevice_h

#import <Foundation/Foundation.h>
#include <AudioUnit/AudioUnit.h>
#import <WebRTC/RTCMacros.h>


@class AudioDeviceModule;
@class RTCCustomAudioDevice;

RTC_OBJC_EXPORT
@protocol RTCCustomAudioDeviceDelegate<NSObject>
-(void)setAudioDeviceModule:(void*)refptr;

@end

RTC_OBJC_EXPORT
@interface RTCCustomAudioDevice : NSObject<RTCCustomAudioDeviceDelegate>

-(bool)microphoneIsInitialized;

@end



#endif /* RTCCustomAudioDevice_h */
